--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   17:31:01 05/14/2021
-- Design Name:   
-- Module Name:   C:/Users/XingyouLee/OneDrive/Program/VHDL/divider/asdfcad.vhd
-- Project Name:  divider
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: divider
-- 
-- Dependencies:
-- 
-- Revision:
-- Revision 0.01 - File Created
-- Additional Comments:
--
-- Notes: 
-- This testbench has been automatically generated using types std_logic and
-- std_logic_vector for the ports of the unit under test.  Xilinx recommends
-- that these types always be used for the top-level I/O of a design in order
-- to guarantee that the testbench will bind correctly to the post-implementation 
-- simulation model.
--------------------------------------------------------------------------------
LIBRARY ieee;
USE ieee.std_logic_1164.ALL;
 
-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--USE ieee.numeric_std.ALL;
 
ENTITY asdfcad IS
END asdfcad;
 
ARCHITECTURE behavior OF asdfcad IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT divider
    PORT(
         A : IN  std_logic_vector(31 downto 0);
         B : IN  std_logic_vector(31 downto 0);
         R : OUT  std_logic_vector(31 downto 0);
         Q : OUT  std_logic_vector(31 downto 0)
        );
    END COMPONENT;
    

   --Inputs
   signal A : std_logic_vector(31 downto 0) := (others => '0');
   signal B : std_logic_vector(31 downto 0) := (others => '0');

 	--Outputs
   signal R : std_logic_vector(31 downto 0);
   signal Q : std_logic_vector(31 downto 0);
   -- No clocks detected in port list. Replace <clock> below with 
   -- appropriate port name 
 

 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: divider PORT MAP (
          A => A,
          B => B,
          R => R,
          Q => Q
        );

   -- Clock process definitions


   -- Stimulus process
   stim_proc: process
   begin		
	
		A <= "00000000000000000000000000000010";
		B <= "00000000000000000000000000000111";	
      -- hold reset state for 100ms.
      wait for 100ns;	

      wait;
   end process;


END;
