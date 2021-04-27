----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    02:22:39 4/23/2021
-- Design Name: 
-- Module Name:    WriteData_mux - Behavioral 
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

entity WriteData_mux is
    Port ( MemtoReg : in  STD_LOGIC;
           ddataout : in  STD_LOGIC_VECTOR (31 downto 0);
           ALUresult : in  STD_LOGIC_VECTOR (31 downto 0);
           WriteData : out  STD_LOGIC_VECTOR (31 downto 0));
end WriteData_mux;

architecture Behavioral of WriteData_mux is

begin
	WriteData <= ALUresult when (MemtoReg = '0')else
					ddataout;
end Behavioral;

