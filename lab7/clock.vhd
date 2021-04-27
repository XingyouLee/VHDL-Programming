----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    14:47:42 03/26/2021 
-- Design Name: 
-- Module Name:    clock - Behavioral 
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
use IEEE.numeric_std.all;

-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--use IEEE.NUMERIC_STD.ALL;

-- Uncomment the following library declaration if instantiating
-- any Xilinx primitives in this code.
--library UNISIM;
--use UNISIM.VComponents.all;

entity myclock is
port (
		clk : in std_logic;
		reset : in std_logic;
		preset : in std_logic;
		hin : in std_logic_vector (3 downto 0);
		min : in std_logic_vector (5 downto 0);
		sin : in std_logic_vector (5 downto 0);
		apin : in std_logic;
		hout : out std_logic_vector (3 downto 0);
		mout : out std_logic_vector (5 downto 0);
		sout : out std_logic_vector (5 downto 0);
		apout : out std_logic
		);
end myclock;

architecture Behavioral of myclock is


begin
	
process(clk, reset, preset, hin, min, sin, apin)

variable hh :  std_logic_vector (3 downto 0);
variable mm :  std_logic_vector (5 downto 0);
variable ss :  std_logic_vector (5 downto 0);
variable aa :  std_logic;

begin
	
	if (reset = '1') then
	
	hh := "0000";
	mm := "000000";
	ss := "000000";
	aa := '0';

	elsif ((preset = '1') and (reset = '0')) then
	
	
	hh := hin;
	mm := min;
	ss := sin;
	aa := apin;
	
	elsif (rising_edge(clk)) then
	
	
		ss := ss + '1';
	
		if (ss = "111100") then
			ss := "000000";
			mm := mm + '1';
		end if;



		if (mm = "111100") then
			mm := "000000";
			hh := hh + '1';
		end if;


		if (hh = "1100") then
			hh := "0000";
			aa := (not aa);
		end if;

	end if;

	hout <= hh;
	mout <= mm;
	sout <= ss;
	apout <= aa;

end process;



end Behavioral;

