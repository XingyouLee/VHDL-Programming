----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    03:45:53 4/23/2021
-- Design Name: 
-- Module Name:    ControlSignalGeneration - Behavioral 
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

entity ControlSignalGeneration is
    Port ( op : in  STD_LOGIC_VECTOR (5 downto 0);
           RegDst : out  STD_LOGIC;
           ALUSrc : out  STD_LOGIC;
           MemtoReg : out  STD_LOGIC;
           RegWrite : out  STD_LOGIC;
           MemRead : out  STD_LOGIC;
           MemWrite : out  STD_LOGIC;
           Branch : out  STD_LOGIC;
           Jump : out  STD_LOGIC;
           ALUOp : out  STD_LOGIC_VECTOR (2 downto 0));
end ControlSignalGeneration;

architecture Behavioral of ControlSignalGeneration is
begin
	with op select
		RegDst <= '1' when "000000", -- R type
					'0' when "100011", -- lw
					'X' when "101011", -- sw
					'X' when "000100", -- beq
					'0' when "000010", -- j
					'0' when "001111", -- lui
					'0' when "001010", -- slti
					'0' when "001000", -- I type
					'U' when others;
	with op select
		ALUSrc <= '0' when "000000",
					'1' when "100011",
					'1' when "101011",
					'0' when "000100",
					'0' when "000010",
					'1' when "001111",
					'1' when "001010",
					'1' when "001000",
					'U' when others;
	with op select
		MemtoReg <= '0' when "000000",
					'1' when "100011",
					'X' when "101011",
					'X' when "000100",
					'0' when "000010",
					'0' when "001111",
					'0' when "001010",
					'0' when "001000",
					'U' when others;
	with op select
		RegWrite <= '1' when "000000",
					'1' when "100011",
					'0' when "101011",
					'0' when "000100",
					'0' when "000010",
					'1' when "001111",
					'1' when "001010",
					'1' when "001000",
					'U' when others;
	with op select
		MemRead <= '0' when "000000",
					'1' when "100011",
					'0' when "101011",
					'0' when "000100",
					'0' when "000010",
					'X' when "001111",
					'X' when "001010",
					'X' when "001000",
					'U' when others;
	with op select
		MemWrite <= '0' when "000000",
					'0' when "100011",
					'1' when "101011",
					'0' when "000100",
					'0' when "000010",
					'0' when "001111",
					'0' when "001010",
					'0' when "001000",
					'U' when others;
	with op select
		Branch <= '0' when "000000",
					'0' when "100011",
					'0' when "101011",
					'1' when "000100",
					'0' when "000010",
					'0' when "001111",
					'0' when "001010",
					'0' when "001000",
					'U' when others;
	with op select
		Jump <= '0' when "000000",
					'0' when "100011",
					'0' when "101011",
					'0' when "000100",
					'1' when "000010",
					'0' when "001111",
					'0' when "001010",
					'0' when "001000",
					'U' when others;
	with op select
		ALUOp <= "111" when "000000",
					"000" when "100011", -- add
					"000" when "101011", -- add
					"001" when "000100", -- sub
					"000" when "000010", -- add
					"110" when "001111", -- shift
					"010" when "001010", -- set less than
					"000" when "001000", -- add
					"UUU" when others;

end Behavioral;

