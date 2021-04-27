----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    03:31:10 4/23/2021
-- Design Name: 
-- Module Name:    JumpAddrCon - Behavioral 
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

entity JumpAddrCon is
    Port ( Addr_extend : in  STD_LOGIC_VECTOR (27 downto 0);
           PC_4 : in  STD_LOGIC_VECTOR (3 downto 0);
           JumpAddr : out  STD_LOGIC_VECTOR (31 downto 0));
end JumpAddrCon;

architecture Behavioral of JumpAddrCon is

begin
	JumpAddr <= (PC_4 & Addr_extend);
end Behavioral;

