----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    19:45:12 03/19/2021 
-- Design Name: 
-- Module Name:    control - Behavioral 
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

entity control is
port(
		clk : IN std_logic;
		reset : IN std_logic;
		op : IN std_logic_vector(5 downto 0);
		funct : IN std_logic_vector(5 downto 0);
		RegDst : OUT STD_LOGIC;
		ALUSrc : OUT STD_LOGIC;
		MemtoReg : OUT STD_LOGIC;
		RegWrite : OUT STD_LOGIC;
		MemRead : OUT STD_LOGIC;
		MemWrite : OUT STD_LOGIC;
		Branch : OUT STD_LOGIC;
		ALUop : INOUT STD_LOGIC_VECTOR( 1 DOWNTO 0 );
		Jump : OUT STD_LOGIC;
		ALUcontrolInput : OUT STD_LOGIC_VECTOR( 3 DOWNTO 0 );
		statenum : OUT STD_LOGIC_VECTOR( 2 DOWNTO 0 )
	);
end control;

architecture Behavioral of control is


signal present_state: std_logic_vector(2 downto 0);
signal next_state: std_logic_vector(2 downto 0);


begin

process(op, funct, present_state)
begin
	CASE present_state is
		when "000" =>
			next_state <= "001";
		when "001" =>
			next_state <= "010";
		when "010" =>
			if (op="000000") then
				regDst <= '1';
				ALUSrc <= '0';
				ALUop <= "10";
				if (funct = "100000") then
					ALUcontrolInput <= "0010";
				elsif (funct = "100010") then
					ALUcontrolInput <= "0110";
				elsif (funct = "100100") then		
					ALUcontrolInput <= "0000";
				elsif (funct = "100101") then
					ALUcontrolInput <= "0001";
				elsif (funct = "101010") then
					ALUcontrolInput <= "0111";
				end if;
			elsif (op="100011") then
				regDst <= '0';
				ALUSrc <= '1';
				ALUop <= "00";
				ALUcontrolInput <= "0010";
			elsif (op = "101011") then
				ALUSrc <= '1';
				ALUop <= "00";
				ALUcontrolInput <= "0010";
			elsif (op = "000100") then
				ALUSrc <= '0';
				ALUop <= "01";
				ALUcontrolInput <= "0110";
			elsif (op = "000010") then
				regDst <= '0';
				ALUSrc <= '0';
				ALUop <= "00";
				JUMP <= '1';
				ALUcontrolInput <= "0010";
			end if;
			next_state <= "011";
		when "011" =>
			if (op="000000") then
				MemRead <= '0';
				MemWrite <= '0';
				Branch <= '0';
			elsif (op="100011") then
				MemRead <= '1';
				MemWrite <= '0';
				Branch <= '0';
			elsif (op = "101011") then
				MemRead <= '0';
				MemWrite <= '1';
				Branch <= '0';
			elsif (op = "000100") then
				MemRead <= '0';
				MemWrite <= '0';
				Branch <= '1';
			elsif (op = "000010") then
				MemRead <= '0';
				MemWrite <= '0';
				Branch <= '0';
				JUMP <= '1';
			end if;
			next_state <= "100";
		when "100" =>
			if (op="000000") then
				MemtoReg <= '0';
				RegWrite <= '1';
			elsif (op="100011") then
				MemtoReg <= '1';
				RegWrite <= '1';
			elsif (op = "101011") then
				RegWrite <= '0';
			elsif (op = "000100") then
				RegWrite <= '0';
			elsif (op = "000010") then
				MemtoReg <= '0';
				RegWrite <= '0';
				JUMP <= '1';
			end if;
			next_state <= "000";
		when others =>
			null;
	end case;
	statenum <= present_state;
end process;



process (reset, clk)
begin

	if(reset = '1') then
		present_state <= "000";
	elsif (clk = '1' and clk'event) then
		present_state <= next_state;
	end if;

end process;



end Behavioral;

