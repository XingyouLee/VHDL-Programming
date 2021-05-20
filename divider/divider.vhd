----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    15:46:23 05/14/2021 
-- Design Name: 
-- Module Name:    divider - Behavioral 
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
use ieee.numeric_std.all;

-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--use IEEE.NUMERIC_STD.ALL;

-- Uncomment the following library declaration if instantiating
-- any Xilinx primitives in this code.
--library UNISIM;
--use UNISIM.VComponents.all;


entity divider is
    Port ( A : in  STD_LOGIC_VECTOR (31 downto 0);
           B : in  STD_LOGIC_VECTOR (31 downto 0);
           R : out  STD_LOGIC_VECTOR (31 downto 0);
           Q : out  STD_LOGIC_VECTOR (31 downto 0));
end divider;

architecture Behavioral of divider is

begin


process(A,B)

variable temp: STD_LOGIC_VECTOR (63 downto 0) := (others => '0');
variable x: STD_LOGIC_VECTOR (63 downto 0);

begin

temp(31 downto 0) := B;
temp := to_stdlogicvector(to_bitvector(std_logic_vector(temp)) sll 1);

for i in 0 to 31 loop
    x  := temp;
    temp(63 downto 32) := temp(63 downto 32) - A;
    if (temp(63) = '0') then
        -- temp := x;
        -- temp := to_stdlogicvector(to_bitvector(std_logic_vector(temp)) sll 1);
        -- temp(0) := '0';
        temp := to_stdlogicvector(to_bitvector(std_logic_vector(temp)) sll 1);
        temp(0) := '1';
    else
        -- temp := to_stdlogicvector(to_bitvector(std_logic_vector(temp)) sll 1);
        -- temp(0) := '1';
        temp := x;
        temp := to_stdlogicvector(to_bitvector(std_logic_vector(temp)) sll 1);
        temp(0) := '0';
    end if;

end loop;
temp(63 downto 31) := to_stdlogicvector(to_bitvector(std_logic_vector(temp(63 downto 31))) srl 1);
Q <= temp(31 downto 0);
R <= temp(63 downto 32);
end process;



end Behavioral;

