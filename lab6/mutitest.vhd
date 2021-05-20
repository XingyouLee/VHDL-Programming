--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   19:41:47 03/19/2021
-- Design Name:   
-- Module Name:   C:/Users/XingyouLee/OneDrive/Program/VHDL/multi/mutitest.vhd
-- Project Name:  multi
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: multicyclefsm
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
 
ENTITY mutitest IS
END mutitest;
 
ARCHITECTURE behavior OF mutitest IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT multicyclefsm
    PORT(
         clk : IN  std_logic;
         reset : IN  std_logic;
         op : IN  std_logic_vector(5 downto 0);
         pcwrite : OUT  std_logic;
         pcwritecon : OUT  std_logic;
         iord : OUT  std_logic;
         memread : OUT  std_logic;
         memwrite : OUT  std_logic;
         irwrite : OUT  std_logic;
         memtoreg : OUT  std_logic;
         pcsource : OUT  std_logic_vector(1 downto 0);
         aluop : OUT  std_logic_vector(1 downto 0);
         alusrcb : OUT  std_logic_vector(1 downto 0);
         alusrca : OUT  std_logic;
         regwrite : OUT  std_logic;
         regdst : OUT  std_logic;
         statenum : OUT  std_logic_vector(3 downto 0)
        );
    END COMPONENT;
    

   --Inputs
   signal clk : std_logic := '0';
   signal reset : std_logic := '0';
   signal op : std_logic_vector(5 downto 0) := (others => '0');

 	--Outputs
   signal pcwrite : std_logic;
   signal pcwritecon : std_logic;
   signal iord : std_logic;
   signal memread : std_logic;
   signal memwrite : std_logic;
   signal irwrite : std_logic;
   signal memtoreg : std_logic;
   signal pcsource : std_logic_vector(1 downto 0);
   signal aluop : std_logic_vector(1 downto 0);
   signal alusrcb : std_logic_vector(1 downto 0);
   signal alusrca : std_logic;
   signal regwrite : std_logic;
   signal regdst : std_logic;
   signal statenum : std_logic_vector(3 downto 0);

   -- Clock period definitions
   constant clk_period : time := 10 ns;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: multicyclefsm PORT MAP (
          clk => clk,
          reset => reset,
          op => op,
          pcwrite => pcwrite,
          pcwritecon => pcwritecon,
          iord => iord,
          memread => memread,
          memwrite => memwrite,
          irwrite => irwrite,
          memtoreg => memtoreg,
          pcsource => pcsource,
          aluop => aluop,
          alusrcb => alusrcb,
          alusrca => alusrca,
          regwrite => regwrite,
          regdst => regdst,
          statenum => statenum
        );

   -- Clock process definitions
   clk_process :process
   begin
		clk <= '0';
		wait for clk_period/2;
		clk <= '1';
		wait for clk_period/2;
   end process;
 

   -- Stimulus process
   stim_proc: process
	begin
	wait for 2ns;
	reset <= '1';
  reset <= '0';
	op <= "000000";
	wait for 8ns;
	reset <= '0';
	op <= "000001";
	wait for 50ns;
	reset <= '1';
	op <= "000000";
	wait for 10ns;
	reset <= '0';
	op <= "000010";
	wait for 40ns;
	reset <= '1';
	op <= "000000";
	wait for 10ns;
	reset <= '0';
	op <= "000000";
	wait for 40ns;
	reset <= '1';
	op <= "000000";
	wait for 10ns;
	reset <= '0';
	op <= "000011";
	wait for 30ns;
	reset <= '1';
	op <= "000000";
	wait for 10ns;
	reset <= '0';op <= "111111";
	wait for 30ns;
	wait;
	end process;

END;
