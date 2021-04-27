----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    03:26:39 4/23/2021
-- Design Name: 
-- Module Name:    JumpAddressShift - Behavioral 
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

entity JumpAddressShift is
    Port ( addr : in  STD_LOGIC_VECTOR (25 downto 0);
           AddrShift : out  STD_LOGIC_VECTOR (27 downto 0));
end JumpAddressShift;

architecture Behavioral of JumpAddressShift is

begin
	AddrShift <= (addr & "00");
end Behavioral;

