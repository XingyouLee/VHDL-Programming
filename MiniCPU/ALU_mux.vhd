----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    18:01:04 4/23/2021 
-- Design Name: 
-- Module Name:    ALU_mux - Behavioral 
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

entity ALU_mux is
    Port ( ALUSrc : in  STD_LOGIC;
           Reg : in  STD_LOGIC_VECTOR (31 downto 0);
           imm : in  STD_LOGIC_VECTOR (31 downto 0);
           ALU_mux_out : out  STD_LOGIC_VECTOR (31 downto 0));
end ALU_mux;

architecture Behavioral of ALU_mux is

begin
	ALU_mux_out <= Reg when (ALUSrc = '0') else 
                    imm;
    
end Behavioral;

