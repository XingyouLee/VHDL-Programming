--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   14:44:35 03/12/2021
-- Design Name:   
-- Module Name:   C:/mult/multtest.vhd
-- Project Name:  mult
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: mult
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
 
ENTITY multtest IS
END multtest;
 
ARCHITECTURE behavior OF multtest IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT mult
    PORT(
         A : IN  std_logic_vector(31 downto 0);
         B : IN  std_logic_vector(31 downto 0);
         P : OUT  std_logic_vector(63 downto 0)
        );
    END COMPONENT;
    

   --Inputs
   signal A : std_logic_vector(31 downto 0) := (others => '0');
   signal B : std_logic_vector(31 downto 0) := (others => '0');

 	--Outputs
   signal P : std_logic_vector(63 downto 0);
   -- No clocks detected in port list. Replace <clock> below with 
   -- appropriate port name 
 

 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: mult PORT MAP (
          A => A,
          B => B,
          P => P
        );

 

   -- Stimulus process
   stim_proc: process
   begin		
	
		A <= "00000000000000000000000000000000";
		B <= "00000000000000000000000000000000";	
      -- hold reset state for 100ms.
      wait for 100ns;	
		A <= "00000000000000000000000000000101";
		B <= "00000000000000000000000000000110";
      wait for 100ns;
		A <= "00000000000000000000000000001101";
		B <= "11111111111111111111111111110111";
      wait for 100ns;
		A <= "01100111001100010110011100110001";
		B <= "00001010110110010000101011011001";
		wait for 200ns;
		A <= "00001101010110110000110101011011";
		B <= "10101110010101101010111001010110";
      -- insert stimulus here 

      wait;
   end process;

END;
