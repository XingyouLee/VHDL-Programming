----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    13:26:39 4/23/2021
-- Design Name: 
-- Module Name:    PC - Behavioral 
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

entity PC is
    Port ( clk : in  STD_LOGIC;
           reset : in  STD_LOGIC;
           in_pc : in  STD_LOGIC_VECTOR (31 downto 0);
           out_pc : out  STD_LOGIC_VECTOR (31 downto 0));
end PC;

architecture Behavioral of PC is



begin
	process(clk,reset,in_pc)
	begin
		if (reset = '1') then
			out_pc <= "00000000000000000100000000000000";
		elsif (clk'event and clk = '1') then
			out_pc <= in_pc;
		end if;
	end process;



end Behavioral;

