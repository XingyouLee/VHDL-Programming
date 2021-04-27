----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    17:04:46 4/23/2021
-- Design Name: 
-- Module Name:    CheckBranch - Behavioral 
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

entity CheckBranch is
    Port ( Branch : in  STD_LOGIC;
           zero : in  STD_LOGIC;
           branch_out : out  STD_LOGIC);
end CheckBranch;

architecture Behavioral of CheckBranch is

begin
	branch_out <= (Branch and zero);
end Behavioral;

