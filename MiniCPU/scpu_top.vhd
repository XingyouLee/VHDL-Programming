----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    17:25:21 4/23/2021
-- Design Name: 
-- Module Name:    scpu_top - Behavioral 
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
use IEEE.STD_LOGIC_ARITH.ALL;
use IEEE.STD_LOGIC_UNSIGNED.ALL;
use IEEE.NUMERIC_STD.ALL;

-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--use IEEE.NUMERIC_STD.ALL;

-- Uncomment the following library declaration if instantiating
-- any Xilinx primitives in this code.
--library UNISIM;
--use UNISIM.VComponents.all;

entity scpu_top is
    Port ( clk : in  STD_LOGIC;
           reset : in  STD_LOGIC);
end scpu_top;

architecture Behavioral of scpu_top is

component scpu
    Port ( clk : in  STD_LOGIC;
           reset : in  STD_LOGIC;
			  iaddr : out std_logic_vector(31 downto 0);
			  idata : in std_logic_vector(31 downto 0);
			  daddr : out std_logic_vector(31 downto 0);
			  ddatain : out std_logic_vector(31 downto 0);
			  ddataout : in std_logic_vector(31 downto 0);
			  oe : out std_logic;
			  we : out std_logic);
end component;

component imem
generic (
	datafile: string := "program.asc" );
    Port ( clk : in  STD_LOGIC;
           reset : in  STD_LOGIC;
			  iaddr : in std_logic_vector(31 downto 0);
			  idata : out std_logic_vector(31 downto 0));
end component;

component dmem
    Port ( clk : in  STD_LOGIC;
           reset : in  STD_LOGIC;
			  daddr : in std_logic_vector(31 downto 0);
			  ddatain : in std_logic_vector(31 downto 0);
			  ddataout : out std_logic_vector(31 downto 0);
			  oe : in std_logic;
			  we : in std_logic);
end component;

signal i_iaddr_s : STD_LOGIC_VECTOR (31 downto 0);
signal i_idata_s : STD_LOGIC_VECTOR (31 downto 0);
signal m_daddr_s : STD_LOGIC_VECTOR (31 downto 0);
signal m_ddatain_s : STD_LOGIC_VECTOR (31 downto 0);
signal m_ddataout_s : STD_LOGIC_VECTOR (31 downto 0);
signal m_oe_s : STD_LOGIC;
signal m_we_s : STD_LOGIC;

begin


imem1 : imem generic map(
			"program.asc")
port map(
			clk => clk,
			reset => reset,
			iaddr => i_iaddr_s,
			idata => i_idata_s
);


scpu0 : scpu port map(
			clk => clk,
			reset => reset,
			iaddr => i_iaddr_s,
			idata => i_idata_s,
			daddr => m_daddr_s,
			ddatain => m_ddatain_s,
			ddataout => m_ddataout_s,
			oe => m_oe_s,
			we => m_we_s
);

dmem2 : dmem port map(
			clk => clk,
			reset => reset,
			daddr => m_daddr_s,
			ddatain => m_ddatain_s,
			ddataout => m_ddataout_s,
			oe => m_oe_s,
			we => m_we_s
);



end Behavioral;

