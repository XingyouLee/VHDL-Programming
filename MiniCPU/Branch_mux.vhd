----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    17:45:12 4/23/2021
-- Design Name: 
-- Module Name:    Branch_mux - Behavioral 
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

entity Branch_mux is
    Port ( Branch_result : in  STD_LOGIC;
           PC_4 : in  STD_LOGIC_VECTOR (31 downto 0);
           BranchAdder : in  STD_LOGIC_VECTOR (31 downto 0);
           result : out  STD_LOGIC_VECTOR (31 downto 0));
end Branch_mux;

architecture Behavioral of Branch_mux is

begin
	result <= PC_4 when (Branch_result = '0')else
					BranchAdder ;
end Behavioral;

