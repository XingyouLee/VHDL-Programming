----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    18:01:04 4/23/2021 
-- Design Name: 
-- Module Name:    ALU - Behavioral 
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
use IEEE.NUMERIC_STD.ALL;


-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--use IEEE.NUMERIC_STD.ALL;

-- Uncomment the following library declaration if instantiating
-- any Xilinx primitives in this code.
--library UNISIM;
--use UNISIM.VComponents.all;

entity ALU is
    Port ( ALUcontrol : in  STD_LOGIC_VECTOR (2 downto 0);
           A : in  STD_LOGIC_VECTOR (31 downto 0);
           B : in  STD_LOGIC_VECTOR (31 downto 0);
           zero : out  STD_LOGIC;
           ALUresult : out  STD_LOGIC_VECTOR (31 downto 0));
end ALU;

architecture Behavioral of ALU is

signal result : STD_LOGIC_VECTOR(31 downto 0);
	
begin
	result <= (A + B) when (ALUcontrol = "000") else
			(A - B) when (ALUcontrol = "001") else
			"00000000000000000000000000000001" when ((ALUcontrol = "010") and(A < B)) else
			"00000000000000000000000000000000" when ((ALUcontrol = "010") and(A >= B)) else
			"00000000000000000000000000000001" when ((ALUcontrol = "101") and(unsigned(A) < unsigned(B))) else
			"00000000000000000000000000000000" when ((ALUcontrol = "101") and(unsigned(A) >= unsigned(B))) else
			(A and B) when (ALUcontrol = "100") else
			(A or B) when (ALUcontrol = "101") else
			(B(15 downto 0) & "0000000000000000") when (ALUcontrol = "110") else
			"UUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUU";
	ALUresult <= result;
	with result select
		zero <= '1' when "00000000000000000000000000000000",
					'0' when others;
end Behavioral;

