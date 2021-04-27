----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    17:53:30 4/23/2021
-- Design Name: 
-- Module Name:    Jump_mux - Behavioral 
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

entity Jump_mux is
    Port ( Jump : in  STD_LOGIC;
           J_Address : in  STD_LOGIC_VECTOR (31 downto 0);
           Branch_mux_result : in  STD_LOGIC_VECTOR (31 downto 0);
           newPC : out  STD_LOGIC_VECTOR (31 downto 0));
end Jump_mux;

architecture Behavioral of Jump_mux is

begin
	newPC <= Branch_mux_result when (Jump = '0')else
				J_Address ;
end Behavioral;

