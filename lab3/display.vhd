----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    15:30:31 02/13/2021 
-- Design Name: 
-- Module Name:    display - Behavioral 
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

-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--use IEEE.NUMERIC_STD.ALL;

-- Uncomment the following library declaration if instantiating
-- any Xilinx primitives in this code.
--library UNISIM;
--use UNISIM.VComponents.all;

entity display is
    Port ( B0 : in  STD_LOGIC;
			  B1 : in  STD_LOGIC;
			  B2 : in  STD_LOGIC;
			  B3 : in  STD_LOGIC;
           L : out  STD_LOGIC_VECTOR (6 downto 0));
end display;

architecture Behavioral of display is

begin

	L <= "1111101" when ((B0='0') and (B1='0') and (B2='0') and (B3='0'))else 
		 "1100000" when ((B0='1') and (B1='0') and (B2='0') and (B3='0'))else 
		 "0110111" when ((B0='0') and (B1='1') and (B2='0') and (B3='0'))else 
         "1100111" when ((B0='1') and (B1='1') and (B2='0') and (B3='0'))else 
         "1101010" when ((B0='0') and (B1='0') and (B2='1') and (B3='0'))else 
         "1001111" when ((B0='1') and (B1='0') and (B2='1') and (B3='0'))else 
         "1011111" when ((B0='0') and (B1='1') and (B2='1') and (B3='0'))else 
         "1100001" when ((B0='1') and (B1='1') and (B2='1') and (B3='0'))else 
         "1111111" when ((B0='0') and (B1='0') and (B2='0') and (B3='1'))else 
         "1101111" when ((B0='1') and (B1='0') and (B2='0') and (B3='1')); 

end Behavioral;

