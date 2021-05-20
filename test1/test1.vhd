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

entity test1 is
port(
		clk : in std_logic;
		reset : in std_logic;
		taken: in std_logic;
		predict: out std_logic);
end test1;

architecture Behavioral of test1 is

signal present_state: std_logic_vector(1 downto 0);
signal next_state: std_logic_vector(1 downto 0);

begin

process(taken, present_state)

begin

	CASE present_state is
		when "00" =>
		predict <= '1';
			case taken is 
				when '0' =>
				next_state <= "01";
				when '1' =>
				next_state <= "00";
				when others =>
				null;
			end case;
		when "01" =>
		predict <= '1';
			case taken is
				when '0' =>
				next_state <= "10";
				when '1' =>
				next_state <= "00";
				when others =>
				null;
			end case;
		when "10" =>
		predict <= '0';
			case taken is
				when '0' =>
				next_state <= "10";
				when '1' =>
				next_state <= "11";
				when others =>
				null;
			end case;
		when "11" =>
		predict <= '0';
			case taken is 
				when '0' =>
				next_state <= "10";
				when '1' =>
				next_state <= "00";
				when others =>
				null;
			end case;
		when others =>
			null;
	end CASE;



end process;






process(clk, reset)

begin
	if(reset = '1' and reset'event) then
		present_state <= "00";
	elsif(clk'event and clk = '1') then
		present_state <= next_state;
	end if;
end process;



end Behavioral;

