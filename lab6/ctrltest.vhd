--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   20:26:54 03/19/2021
-- Design Name:   
-- Module Name:   C:/Users/XingyouLee/OneDrive/Program/VHDL/multi/ctrltest.vhd
-- Project Name:  multi
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: control
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
 
ENTITY ctrltest IS
END ctrltest;
 
ARCHITECTURE behavior OF ctrltest IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT control
		port(
				clk : IN std_logic;
				reset : IN std_logic;
				op : IN std_logic_vector(5 downto 0);
				funct : IN std_logic_vector(5 downto 0);
				RegDst : OUT STD_LOGIC;
				ALUSrc : OUT STD_LOGIC;
				MemtoReg : OUT STD_LOGIC;
				RegWrite : OUT STD_LOGIC;
				MemRead : OUT STD_LOGIC;
				MemWrite : OUT STD_LOGIC;
				Branch : OUT STD_LOGIC;
				ALUop : INOUT STD_LOGIC_VECTOR( 1 DOWNTO 0 );
				Jump : OUT STD_LOGIC;
				ALUcontrolInput : OUT STD_LOGIC_VECTOR( 3 DOWNTO 0 );
				statenum : OUT STD_LOGIC_VECTOR( 2 DOWNTO 0 )
			);
    END COMPONENT;
    

   --Inputs
   signal clk : std_logic := '0';
   signal reset : std_logic := '0';
   signal op : std_logic_vector(5 downto 0) := (others => '0');
   signal funct : std_logic_vector(5 downto 0) := (others => '0');

	--BiDirs
   signal ALUop : std_logic_vector(1 downto 0);

 	--Outputs
   signal RegDst : std_logic;
   signal ALUSrc : std_logic;
   signal MemtoReg : std_logic;
   signal RegWrite : std_logic;
   signal MemRead : std_logic;
   signal MemWrite : std_logic;
   signal Branch : std_logic;
   signal Jump : std_logic;
   signal ALUcontrolInput : std_logic_vector(3 downto 0);
	signal statenum :  STD_LOGIC_VECTOR( 2 DOWNTO 0 );

   -- Clock period definitions
   constant clk_period : time := 10 ns;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: control PORT MAP (
          clk => clk,
          reset => reset,
          op => op,
          funct => funct,
          RegDst => RegDst,
          ALUSrc => ALUSrc,
          MemtoReg => MemtoReg,
          RegWrite => RegWrite,
          MemRead => MemRead,
          MemWrite => MemWrite,
          Branch => Branch,
          ALUop => ALUop,
          Jump => Jump,
          ALUcontrolInput => ALUcontrolInput
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
	op <= "000000";
	funct <= "100000";
	wait for 8ns;
	reset <= '0';
	op <= "000000";
	funct <= "100000";
	wait for 50ns;
	reset <= '1';
	op <= "000000";
	funct <= "100010";
	wait for 10ns;
	reset <= '0';
	op <= "000000";
	funct <= "100010";
	wait for 40ns;
	reset <= '0';
	op <= "000000";
	funct <= "100100";
	wait for 10ns;
	reset <= '0';
	op <= "000000";
	funct <= "100101";
	wait for 40ns;
	reset <= '0';
	op <= "000000";
	funct <= "101010";
	wait for 10ns;
	reset <= '0';
	op <= "100011";
	funct <= "101010";
	wait for 30ns;
	reset <= '0';
	op <= "101011";
	funct <= "100010";
	wait for 10ns;
	reset <= '0';
	op <= "000100";
	wait for 30ns;
	reset <= '0';
	op <= "000010";
	wait for 30ns;
	wait;
end process;

END;
