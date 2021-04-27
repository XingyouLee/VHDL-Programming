
use std.textio.all;
library ieee;
use ieee.std_logic_1164.all;
use ieee.std_logic_unsigned.all;
use ieee.std_logic_arith.all;


entity registers is
port (
	clk: in std_logic;
	reset: in std_logic;
	ra1: in std_logic_vector(4 downto 0);
	ra2: in std_logic_vector(4 downto 0);
	wa: in std_logic_vector(4 downto 0);
	rd1: out std_logic_vector(31 downto 0);
	rd2: out std_logic_vector(31 downto 0);
	wd: in std_logic_vector(31 downto 0);
	we: in std_logic );
end registers;

architecture registers_arch of registers is
 

  TYPE reg_data IS ARRAY (31 DOWNTO 0) OF std_logic_vector(31 DOWNTO 0);
  TYPE reg_name IS ARRAY (31 DOWNTO 0) OF string(1 to 4);
  
begin

	process (clk, reset, ra1, ra2, wa, wd, we)
	--process (clk, reset)
	variable VD : reg_data;
	variable i: integer;
	variable ra1i, ra2i, wai: integer;
	variable good: boolean;

	begin

		if (reset = '0') then

			wai := conv_integer(unsigned(wa));
			ra1i := conv_integer(unsigned(ra1));
			ra2i := conv_integer(unsigned(ra2));

			if (clk = '1' and clk'event and we = '1') then -- write at the end of clk
				-- if using tb, write beginning
				-- if (we = '1') then -- write at the beginning of clk
				VD(wai) := wd;
			end if;
			VD(0) := "00000000000000000000000000000000";

			if (we = '1' and wa = ra1) then
				rd1 <= wd;
			else				
				rd1 <= VD(ra1i);
			end if;

			if (we = '1' and wa = ra2) then
				rd2 <= wd;
			else						  
				rd2 <= VD(ra2i);
			end if;

		end if;

	end process;

end registers_arch;

