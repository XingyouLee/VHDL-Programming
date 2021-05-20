--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   16:31:52 05/14/2021
-- Design Name:   
-- Module Name:   C:/Users/XingyouLee/OneDrive/Program/VHDL/divider/test.vhd
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
 
ENTITY test IS
END test;
 
ARCHITECTURE behavior OF test IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT divider
    Port ( A : in  STD_LOGIC_VECTOR (31 downto 0);
           B : in  STD_LOGIC_VECTOR (31 downto 0);
           R : out  STD_LOGIC_VECTOR (63 downto 0)
           Q : out  STD_LOGIC_VECTOR (63 downto 0));
    END COMPONENT;
    

   --Inputs
   signal A : std_logic_vector(31 downto 0) := (others => '0');
   signal B : std_logic_vector(31 downto 0) := (others => '0');

 	--Outputs
   signal P : std_logic_vector(63 downto 0);
   signal P : std_logic_vector(63 downto 0);
   -- No clocks detected in port list. Replace <clock> below with 
   -- appropriate port name 
 

 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: divider PORT MAP (
          A => A,
          B => B,
          P => P
        );


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