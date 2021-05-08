----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    02:56:46 4/23/2021
-- Design Name: 
-- Module Name:    ALUcontrol - Behavioral 
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

entity ALUcontrol is
    Port ( funct : in  STD_LOGIC_VECTOR (5 downto 0);
           ALUOp : in  STD_LOGIC_VECTOR (2 downto 0);
           ALUcontrol : out  STD_LOGIC_VECTOR (2 downto 0));
end ALUcontrol;

architecture Behavioral of ALUcontrol is

signal Rtype : STD_LOGIC;

begin
	ALUcontrol <= "000" when (ALUOp = "000") else --lw sw j -add
						"001" when (ALUOp = "001") else --beq -sub
						"010" when (ALUOp = "010") else --slti
						"010" when (ALUOp = "010") else --sltiu
						"110" when (ALUOp = "110") else --s16
						"000" when (ALUOp = "111")and (funct = "100000") else --R type--add
						"001" when (ALUOp = "111")and (funct = "100010") else --R type--sub
						"011" when (ALUOp = "111")and (funct = "101010") else --R type--slt
						"100" when (ALUOp = "111")and (funct = "100100") else --R type--and
						"101" when (ALUOp = "111")and (funct = "100101") else --R type--or
						"011" when (ALUOp = "111")and (funct = "101011") else --R type--sltu
						"UUU";
end Behavioral;

