----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    17:20:57 4/23/2021
-- Design Name: 
-- Module Name:    scpu - Behavioral 
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

entity scpu is
    Port ( clk : in  STD_LOGIC;
           reset : in  STD_LOGIC;
			  iaddr : out std_logic_vector(31 downto 0);
			  idata : in std_logic_vector(31 downto 0);
			  daddr : out std_logic_vector(31 downto 0);
			  ddatain : out std_logic_vector(31 downto 0);
			  ddataout : in std_logic_vector(31 downto 0);
			  oe : out std_logic;
			  we : out std_logic);
end scpu;

architecture Behavioral of scpu is

component PC
    Port ( clk : in  STD_LOGIC;
           reset : in  STD_LOGIC;
           in_pc : in  STD_LOGIC_VECTOR (31 downto 0);
           out_pc : out  STD_LOGIC_VECTOR (31 downto 0));
end component;

component RegDst_mux
    Port ( RegDst : in  STD_LOGIC;
           RT : in  STD_LOGIC_VECTOR (4 downto 0);
           RD : in  STD_LOGIC_VECTOR (4 downto 0);
           WriteReg : out  STD_LOGIC_VECTOR (4 downto 0));
end component;

component registers 
    port ( clk: in std_logic;
           reset: in std_logic;
           ra1: in std_logic_vector(4 downto 0);
           ra2: in std_logic_vector(4 downto 0);
           wa: in std_logic_vector(4 downto 0);
           rd1: out std_logic_vector(31 downto 0);
           rd2: out std_logic_vector(31 downto 0);
           wd: in std_logic_vector(31 downto 0);
           we: in std_logic );
end component;

component ALU_mux
    Port ( ALUSrc : in  STD_LOGIC;
           Reg : in  STD_LOGIC_VECTOR (31 downto 0);
           imm : in  STD_LOGIC_VECTOR (31 downto 0);
           ALU_mux_out : out  STD_LOGIC_VECTOR (31 downto 0));
end component;

component ALU
    Port ( ALUcontrol : in  STD_LOGIC_VECTOR (2 downto 0);
           A : in  STD_LOGIC_VECTOR (31 downto 0);
           B : in  STD_LOGIC_VECTOR (31 downto 0);
           zero : out  STD_LOGIC;
           ALUresult : out  STD_LOGIC_VECTOR (31 downto 0));
end component;

component WriteData_mux
    Port ( MemtoReg : in  STD_LOGIC;
           ddataout : in  STD_LOGIC_VECTOR (31 downto 0);
           ALUresult : in  STD_LOGIC_VECTOR (31 downto 0);
           WriteData : out  STD_LOGIC_VECTOR (31 downto 0));
end component;

component  SignExtend
    Port ( imm : in  STD_LOGIC_VECTOR (15 downto 0);
           imm32 : out  STD_LOGIC_VECTOR (31 downto 0));
end component;

component ALUcontrol
    Port ( funct : in  STD_LOGIC_VECTOR (5 downto 0);
           ALUOp : in  STD_LOGIC_VECTOR (2 downto 0);
           ALUcontrol : out  STD_LOGIC_VECTOR (2 downto 0));
end component;

component ControlSignalGeneration
    Port ( op : in  STD_LOGIC_VECTOR (5 downto 0);
           RegDst : out  STD_LOGIC;
           ALUSrc : out  STD_LOGIC;
           MemtoReg : out  STD_LOGIC;
           RegWrite : out  STD_LOGIC;
           MemRead : out  STD_LOGIC;
           MemWrite : out  STD_LOGIC;
           Branch : out  STD_LOGIC;
           Jump : out  STD_LOGIC;
           ALUOp : out  STD_LOGIC_VECTOR (2 downto 0));
end component;

component PCadd4
    Port ( PC : in  STD_LOGIC_VECTOR (31 downto 0);
           PC_4 : out  STD_LOGIC_VECTOR (31 downto 0));
end component;

component ShiftImmLeft
    Port ( Extend_Imm : in  STD_LOGIC_VECTOR (31 downto 0);
           ShiftLeft2 : out  STD_LOGIC_VECTOR (31 downto 0));
end component;

component CheckBranch
    Port ( Branch : in  STD_LOGIC;
           zero : in  STD_LOGIC;
           branch_out : out  STD_LOGIC);
end component;

component BranchAddressAdder
    Port ( PC_4 : in  STD_LOGIC_VECTOR (31 downto 0);
           ShiftLeft2 : in  STD_LOGIC_VECTOR (31 downto 0);
           result : out  STD_LOGIC_VECTOR (31 downto 0));
end component;

component Branch_mux
    Port ( Branch_result : in  STD_LOGIC;
           PC_4 : in  STD_LOGIC_VECTOR (31 downto 0);
           BranchAdder : in  STD_LOGIC_VECTOR (31 downto 0);
           result : out  STD_LOGIC_VECTOR (31 downto 0));
end component;

component Jump_mux
    Port ( Jump : in  STD_LOGIC;
           J_Address : in  STD_LOGIC_VECTOR (31 downto 0);
           Branch_mux_result : in  STD_LOGIC_VECTOR (31 downto 0);
           newPC : out  STD_LOGIC_VECTOR (31 downto 0));
end component;

component JumpAddressShift
    Port ( addr : in  STD_LOGIC_VECTOR (25 downto 0);
           AddrShift : out  STD_LOGIC_VECTOR (27 downto 0));
end component;

component JumpAddrCon
    Port ( Addr_extend : in  STD_LOGIC_VECTOR (27 downto 0);
           PC_4 : in  STD_LOGIC_VECTOR (3 downto 0);
           JumpAddr : out  STD_LOGIC_VECTOR (31 downto 0));
end component;

signal out_1_to_10 : STD_LOGIC_VECTOR (31 downto 0);
signal out_2_to_3 : STD_LOGIC_VECTOR (4 downto 0);
signal out_3_to_4 : STD_LOGIC_VECTOR (31 downto 0);
signal out_3_to_5 : STD_LOGIC_VECTOR (31 downto 0);
signal out_4_to_5 : STD_LOGIC_VECTOR (31 downto 0);
signal out_5_to_6 : STD_LOGIC_VECTOR (31 downto 0);
signal out_5_to_12 : STD_LOGIC;
signal out_6_to_3 : STD_LOGIC_VECTOR (31 downto 0);
signal out_7_to_4and11 : STD_LOGIC_VECTOR (31 downto 0);
signal out_8_to_5 : STD_LOGIC_VECTOR (2 downto 0);
signal out_9_to_2 : STD_LOGIC;
signal out_9_to_15 : STD_LOGIC;
signal out_9_to_12 : STD_LOGIC;
signal out_9_to_6 : STD_LOGIC;
signal out_9_to_4 : STD_LOGIC;
signal out_9_to_3 : STD_LOGIC;
signal out_9_to_8 : STD_LOGIC_VECTOR (2 downto 0);
signal out_10_to_13and14 : STD_LOGIC_VECTOR (31 downto 0);
signal out_11_to_13 : STD_LOGIC_VECTOR (31 downto 0);
signal out_12_to_14 : STD_LOGIC;
signal out_13_to_14 : STD_LOGIC_VECTOR (31 downto 0);
signal out_14_to_15 : STD_LOGIC_VECTOR (31 downto 0);
signal out_15_to_1 : STD_LOGIC_VECTOR (31 downto 0);
signal out_16_to_17 : STD_LOGIC_VECTOR (27 downto 0);
signal out_17_to_15 : STD_LOGIC_VECTOR (31 downto 0);


begin

PC1 : PC port map(
			clk => clk,
			reset => reset,
			in_pc => out_15_to_1,
			out_pc => out_1_to_10
);


RegDst_mux2 : RegDst_mux port map(
			RegDst => out_9_to_2,
			RT => idata(20 downto 16),
			RD => idata(15 downto 11),
			WriteReg => out_2_to_3
);

registers3 : registers port map(
			clk => clk,
			reset => reset,
			ra1 => idata(25 downto 21),
			ra2 => idata(20 downto 16),
			wa => out_2_to_3,
			rd1 => out_3_to_5,
			rd2 => out_3_to_4,
			wd => out_6_to_3,
			we => out_9_to_3
);

ALU_mux4 : ALU_mux port map(
			ALUSrc => out_9_to_4,
			Reg => out_3_to_4,
			imm => out_7_to_4and11,
			ALU_mux_out => out_4_to_5
);

ALU5 : ALU port map(
			ALUcontrol => out_8_to_5,
			A => out_3_to_5,
			B => out_4_to_5,
			zero => out_5_to_12,
			ALUresult => out_5_to_6
);

WriteData_mux6 : WriteData_mux port map(
			MemtoReg => out_9_to_6,
			ddataout => ddataout,
			ALUresult => out_5_to_6,
			WriteData => out_6_to_3
);

SignExtend7 : SignExtend port map(
			imm => idata(15 downto 0),
			imm32 => out_7_to_4and11
);

ALUcontrol8 : ALUcontrol port map(
			funct => idata(5 downto 0),
			ALUOp => out_9_to_8,
			ALUcontrol => out_8_to_5
);

ControlSignalGeneration9 : ControlSignalGeneration port map(
			op => idata(31 downto 26),
			RegDst => out_9_to_2,
			ALUSrc => out_9_to_4,
			MemtoReg => out_9_to_6,
			RegWrite => out_9_to_3,
			MemRead => oe,
			MemWrite => we,
			Branch => out_9_to_12,
			Jump => out_9_to_15,
			ALUOp => out_9_to_8
);

PCadd4_10 : PCadd4 port map(
			PC => out_1_to_10,
			PC_4 => out_10_to_13and14
);

ShiftImmLeft11 : ShiftImmLeft port map(
			Extend_Imm => out_7_to_4and11,
			ShiftLeft2 => out_11_to_13
);

CheckBranch12 : CheckBranch port map(
			Branch => out_9_to_12,
			zero => out_5_to_12,
			branch_out => out_12_to_14
);

BranchAddressAdder13 : BranchAddressAdder port map(
			PC_4 => out_10_to_13and14,
			ShiftLeft2 => out_11_to_13,
			result => out_13_to_14
);

Branch_mux14 : Branch_mux port map(
			Branch_result => out_12_to_14,
			PC_4 => out_10_to_13and14,
			BranchAdder => out_13_to_14,
			result => out_14_to_15
);

Jump_mux15 : Jump_mux port map(
			Jump => out_9_to_15,
			J_Address => out_17_to_15,
			Branch_mux_result => out_14_to_15,
			newPC => out_15_to_1
);

JumpAddressShift16 : JumpAddressShift port map(
			addr => idata(25 downto 0),
			AddrShift => out_16_to_17
);

JumpAddrCon17 : JumpAddrCon port map(
			Addr_extend => out_16_to_17,
			PC_4 => out_10_to_13and14(31 downto 28),
			JumpAddr => out_17_to_15
);

iaddr <= out_1_to_10;
ddatain <= out_3_to_4;
daddr <= out_5_to_6;



end Behavioral;

