----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    14:32:15 03/05/2021 
-- Design Name: 
-- Module Name:    acc - Behavioral 
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
use IEEE.STD_LOGIC_UNSIGNED.ALL;

-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--use IEEE.NUMERIC_STD.ALL;

-- Uncomment the following library declaration if instantiating
-- any Xilinx primitives in this code.
--library UNISIM;
--use UNISIM.VComponents.all;

entity acc is
    Port ( A : in  STD_LOGIC_VECTOR (31 downto 0);
           S : out  STD_LOGIC_VECTOR (63 downto 0);
           clk, reset : in  STD_LOGIC);
end acc;

architecture Behavioral of acc is

signal temp: STD_LOGIC_VECTOR (63 downto 0) := (others=>'0');
signal i: STD_LOGIC_VECTOR (31 downto 0) := (others=>'0');



begin


process(clk, reset)
	begin
	if (reset = '1') then
		i <= (others=>'0');
		temp <= (others=>'0');
		
	elsif ((clk = '1' and clk'event) and (i <= "00000000000000000000000000001010")) then
		temp <= temp + A*i;
		i <= i+1;
	
	end if;
	
end process;
S <= temp;

end Behavioral;

