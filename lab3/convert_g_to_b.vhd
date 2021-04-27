----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    16:34:19 02/13/2021 
-- Design Name: 
-- Module Name:    convert_g_to_b - Behavioral 
-- Project Name: 
-- Target Devices: 
-- Tool versions: 
-- Description: 
--
-- Dependencies: 

-- Revision: 
-- Revision 0.01 - File Created
-- Additional Comments: 
--
----------------------------------------------------------------------------------
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use ieee.std_logic_arith.all;
use ieee.std_logic_unsigned.all;
use ieee.numeric_std.all;

-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--use IEEE.NUMERIC_STD.ALL;

-- Uncomment the following library declaration if instantiating
-- any Xilinx primitives in this code.
--library UNISIM;
--use UNISIM.VComponents.all;

entity convert_g_to_b is
    Port ( G : in   bit_vector (3 downto 0);
           B : out  bit_vector (3 downto 0));
end convert_g_to_b;

architecture Behavioral of convert_g_to_b is

begin

B <= G xor (G srl 2) xor (G srl 1) xor (G srl 3); 

end Behavioral;

