----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    14:14:34 03/12/2021 
-- Design Name: 
-- Module Name:    mult - Behavioral 
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

-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--use IEEE.NUMERIC_STD.ALL;

-- Uncomment the following library declaration if instantiating
-- any Xilinx primitives in this code.
--library UNISIM;
--use UNISIM.VComponents.all;

entity mult is
    Port ( A : in  STD_LOGIC_VECTOR (31 downto 0);
           B : in  STD_LOGIC_VECTOR (31 downto 0);
           P : out  STD_LOGIC_VECTOR (63 downto 0));
end mult;

architecture Behavioral of mult is

begin


process(A,B)

variable temp: STD_LOGIC_VECTOR (63 downto 0);
variable lsb: STD_LOGIC_VECTOR (1 downto 0);
variable x: STD_LOGIC;

begin

temp(63 downto 32) := (others => '0');
temp(31 downto 0) := B;
x := '0';

for i in 0 to 31 loop
	lsb(1) := temp(0);
	lsb(0) := x;
	
	
	
	if lsb = "10" then
	temp(63 downto 32) := temp(63 downto 32) - A;
	elsif lsb = "01" then
	temp(63 downto 32) := temp(63 downto 32) + A;
	else
	null;
	end if;
	
	x := temp(0);
	temp := to_stdlogicvector(to_bitvector(std_logic_vector(temp)) sra 1);
	
	
	


end loop;

P <= temp;
end process;



end Behavioral;

