----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    16:25:48 04/09/2021 
-- Design Name: 
-- Module Name:    fft2d - Behavioral 
-- Project Name: 
-- Target Devices: 
-- Tool versions: 
-- Description: 
--
-- Dependencies: 
--
-- Revision: 
-- Revision 0.01 - File Created
-- Additional Comments: 
--
----------------------------------------------------------------------------------
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.MATH_REAL.ALL;
library work;
use work.fft16_pkg.ALL;


-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--use IEEE.NUMERIC_STD.ALL;

-- Uncomment the following library declaration if instantiating
-- any Xilinx primitives in this code.
--library UNISIM;
--use UNISIM.VComponents.all;

entity fft2d is
port(   
	clk : IN std_logic;
	reset : IN std_logic;
	s2d : in comp_array2D; --input signals in time domain
    y2d : out comp_array2D; --output signals in frequency domain
	 				aa : out comp_array2D; 	--input signals in time domain
            bb : out comp_array2D	--output signals in frequency domain
    );
end fft2d;

architecture Behavioral of fft2d is

component fft16 is
    port(
            clk : IN std_logic;
            reset : IN std_logic;
            s : in comp_array; 	--input signals in time domain
            y : out comp_array	--output signals in frequency domain
            );
end component;


signal a,b : comp_array2D ;

begin


for_row: 
    for i in 0 to 15 generate
        row : fft16 port map
        (clk, reset, s2d(i), a(i));
    end generate;


transposed_matrix_row:
    for i in 0 to 15 generate
        transposed_matrix_colomn:
            for j in 0 to 15 generate
                b(j)(i) <= a(i)(j);
        end generate;
    end generate;


for_column: 
    for i in 0 to 15 generate
        column : fft16 port map
        (clk, reset, b(i), y2d(i));
    end generate;


aa<=a;
bb<=b;


end Behavioral;

