----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    17:46:58 03/26/2021 
-- Design Name: 
-- Module Name:    random - Behavioral 
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
USE ieee.std_logic_1164.ALL;
USE ieee.numeric_std.ALL;

-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--use IEEE.NUMERIC_STD.ALL;

-- Uncomment the following library declaration if instantiating
-- any Xilinx primitives in this code.
--library UNISIM;
--use UNISIM.VComponents.all;

entity myrandom is 
port (
	clk : in std_logic;
	reset: in std_logic;
	din : in std_logic_vector(37 downto 1);
	dout : out std_logic_vector(37 downto 1) );
end myrandom;

architecture Behavioral of myrandom is

signal D: std_logic_vector(37 downto 1) := (others => '0');
signal Q: std_logic_vector(37 downto 1) := (others => '0');


begin

process(clk, reset, din)

begin
	if(reset = '1') then
		Q <= din;
	elsif (rising_edge(clk)) then
		for i in 1 to 36 loop
			D(i+1) <= Q(i);
			Q(i) <= D(i);
		end loop;

	Q(37) <= D(37);
	D(1) <= Q(37) xor Q(5) xor Q(4) xor Q(3) xor Q(2) xor Q(1);

	end if;
end process;

dout <= Q;

end Behavioral;

