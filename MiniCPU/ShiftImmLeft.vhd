----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    17:25:57 4/23/2021
-- Design Name: 
-- Module Name:    ShiftImmLeft - Behavioral 
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
use ieee.numeric_std.all;

-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--use IEEE.NUMERIC_STD.ALL;

-- Uncomment the following library declaration if instantiating
-- any Xilinx primitives in this code.
--library UNISIM;
--use UNISIM.VComponents.all;

entity ShiftImmLeft is
    Port ( Extend_Imm : in  STD_LOGIC_VECTOR (31 downto 0);
           ShiftLeft2 : out  STD_LOGIC_VECTOR (31 downto 0));
end ShiftImmLeft;

architecture Behavioral of ShiftImmLeft is

begin
	ShiftLeft2 <=  std_logic_vector(unsigned(Extend_Imm) sll 2);
end Behavioral;

