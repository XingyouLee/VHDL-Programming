----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    12:06:04 03/19/2021 
-- Design Name: 
-- Module Name:    multicyclefsm - Behavioral 
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

entity multicyclefsm is
port(
		clk : in std_logic;
		reset : in std_logic;
		op : in std_logic_vector(5 downto 0);
		pcwrite : out std_logic;
		pcwritecon: out std_logic;
		iord: out std_logic;
		memread: out std_logic;
		memwrite: out std_logic;
		irwrite: out std_logic;
		memtoreg: out std_logic;
		pcsource: out std_logic_vector(1 downto 0);
		aluop: out std_logic_vector(1 downto 0);
		alusrcb: out std_logic_vector(1 downto 0);
		alusrca: out std_logic;
		regwrite: out std_logic;
		regdst : out std_logic;
		statenum : out std_logic_vector(3 downto 0));
end multicyclefsm;

architecture Behavioral of multicyclefsm is

signal present_state: std_logic_vector(3 downto 0);
signal next_state: std_logic_vector(3 downto 0);

begin

process(op, present_state)

begin

	CASE present_state is
		when "0000" =>
			memread <= '1';
			memwrite <= '0';
			iord <= '0';
			irwrite <= '1';
			alusrcb <= "00";
			pcwrite <= '1';
			pcsource <= "00";
			next_state <="0001";
		when "0001" =>
			alusrca <= '0';
			alusrcb <= "11";
			aluop <= "00";
			if ((op = "000001") or (op = "000010")) then
				next_state <= "0010";
			elsif(op = "000000") then
				next_state <="0110";
			elsif(op = "000011") then
				next_state <="1000";
			elsif(op = "111111") then
				next_state <="1001";
			end if;
		when "0010" =>
			alusrca <= '1';
			alusrcb <= "10";
			aluop <= "00";
			if(op = "000001") then
				next_state <= "0011";
			elsif(op ="000010") then
				next_state <= "0101";
			end if;
			
		when "0011" =>
			memread <= '1';
			iord <= '1';
			next_state <= "0100";
		
		when "0100" =>
			regdst <= '0';
			regwrite <= '1';
			memtoreg <= '1';
			next_state <= "0000";
		when "0101" =>
			memwrite <= '1';
			iord <= '1';
			next_state <= "0000";
		when "0110" =>
			alusrca <= '1';
			alusrcb <= "00";
			aluop <= "10";
			next_state <= "0111";
		when "1000" =>
			regdst <= '1';
			regwrite <= '1';
			memtoreg <= '0';
			next_state <= "0000";
		when "1001" =>
			pcwrite <= '1';
			pcsource <= "10";
			next_state <= "0000";
		when others =>
			null;
		end CASE;
		statenum <= present_state;


end process;






process(clk, reset)

begin
	if(reset = '1') then
		present_state <= "0000";
	elsif(clk'event and clk = '1') then
		present_state <= next_state;
	end if;
end process;


end Behavioral;

