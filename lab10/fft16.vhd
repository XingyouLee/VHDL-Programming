library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.MATH_REAL.ALL;
library work;
use work.fft16_pkg.ALL;

entity fft16 is
port(
		clk : IN std_logic;
		reset : IN std_logic;
		s : in comp_array; 	--input signals in time domain
		y : out comp_array	--output signals in frequency domain
		);
end fft16;

architecture Behavioral of fft16 is

component butterfly is 
		port(
			s1,s2 : in complex; --inputs
			w :in complex; -- phase factor
			g1,g2 :out complex -- outputs
			);
end component;

signal a,b,c : comp_array := (others => (0.0,0.0));
--phase factor, W_N = e^(-i*2*pi/N) and N=2,4,8,16 here.
--W_N^n = cos(2*pi*n/N) - i*sin(2*pi*n/N);?nd n has range from 0 to 1/3/7/15.
constant w2 : complex := ( (1.0,0.0) ); -- please fill the w2 here.
constant w4 : comp_arrayW4 := (  (1.0,0.0),  (0.0,-1.0) ); -- please fill the w4 here.
constant w8 : comp_arrayW8 := ( (1.0,0.0), (0.7071,-0.7071), (0.0,-1.0), (-0.7071,-0.7071) );
constant w16 : comp_arrayW16 := ( (1.0,0.0), (0.924,-0.383), (0.7071,-0.7071), (0.383,-0.924), (0.0,-1.0),  (-0.383, -0.924), (-0.7071,-0.7071),  (-0.924,-0.383)  ); -- please fill the w16 here.

begin

-- stage 0 of butterfly's.

bf01 : butterfly port map(s(0),s(8),w2,a(0),a(1));  --a(0) <= s(0) + w2*s(8); a(1) <= s(0) - w2*s(8);
bf02 : butterfly port map(s(4),s(12),w2,a(2),a(3));
bf03 : butterfly port map(s(2),s(10),w2,a(4),a(5));
bf04 : butterfly port map(s(6),s(14),w2,a(6),a(7));
bf05 : butterfly port map(s(1),s(9),w2,a(8),a(9));
bf06 : butterfly port map(s(5),s(13),w2,a(10),a(11));
bf07 : butterfly port map(s(3),s(11),w2,a(12),a(13));
bf08 : butterfly port map(s(7),s(15),w2,a(14),a(15));

-- stage 1 of butterfly's.

bf11 : butterfly port map(a(0),a(2),w4(0),b(0),b(2));  
bf12 : butterfly port map(a(1),a(3),w4(1),b(1),b(3));
bf13 : butterfly port map(a(4),a(6),w4(0),b(4),b(6));
bf14 : butterfly port map(a(5),a(7),w4(1),b(5),b(7));
bf15 : butterfly port map(a(8),a(10),w4(0),b(8),b(10));
bf16 : butterfly port map(a(9),a(11),w4(1),b(9),b(11));
bf17 : butterfly port map(a(12),a(14),w4(0),b(12),b(14));
bf18 : butterfly port map(a(13),a(15),w4(1),b(13),b(15));




-- stage 2 of butterfly's.

bf21 : butterfly port map(b(0),b(4),w8(0),c(0),c(4));  
bf22 : butterfly port map(b(1),b(5),w8(1),c(1),c(5));
bf23 : butterfly port map(b(2),b(6),w8(2),c(2),c(6));
bf24 : butterfly port map(b(3),b(7),w8(3),c(3),c(7));
bf25 : butterfly port map(b(8),b(12),w8(0),c(8),c(12));
bf26 : butterfly port map(b(9),b(13),w8(1),c(9),c(13));
bf27 : butterfly port map(b(10),b(14),w8(2),c(10),c(14));
bf28 : butterfly port map(b(11),b(15),w8(3),c(11),c(15));





-- stage 3 of butterfly's.

bf31 : butterfly port map(c(0),c(8),w16(0),y(0),y(8));  
bf32 : butterfly port map(c(1),c(9),w16(1),y(1),y(9));
bf33 : butterfly port map(c(2),c(10),w16(2),y(2),y(10));
bf34 : butterfly port map(c(3),c(11),w16(3),y(3),y(11));
bf35 : butterfly port map(c(4),c(12),w16(4),y(4),y(12));
bf36 : butterfly port map(c(5),c(13),w16(5),y(5),y(13));
bf37 : butterfly port map(c(6),c(14),w16(6),y(6),y(14));
bf38 : butterfly port map(c(7),c(15),w16(7),y(7),y(15));



end Behavioral;