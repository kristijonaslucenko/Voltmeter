
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;


entity struc_top is
    Port ( sd : in  STD_LOGIC;
           clkin : in  STD_LOGIC;
           start_stop_sw : in  STD_LOGIC;
           cs_to_adc : out  STD_LOGIC;
           sclk_to_adc : out STD_LOGIC;
					PortA_OE : out  STD_LOGIC;-- Activate port A 
					PortA_DIR : out  STD_LOGIC;  -- Port A is output 
					PortB_OE : out  STD_LOGIC;  -- Activate port B 
					PortB_DIR : out  STD_LOGIC;
           seg_out : out  STD_LOGIC_VECTOR (6 downto 0);
			  dot_out : out std_logic;
           strobe_out : out  STD_LOGIC_VECTOR (5 downto 0));
end struc_top;

architecture Behavioral of struc_top is
	COMPONENT BCDConv
	PORT(
		Clock : IN std_logic;
		Reset : IN std_logic;
		Init : IN std_logic;
		ModIn : IN std_logic;          
		ModOut : OUT std_logic;
		Q : OUT std_logic_vector(19 downto 0)
		);
	END COMPONENT;

	COMPONENT FSM
	PORT(
		clk : IN std_logic;
		start_stop : IN std_logic;
		cs : OUT std_logic;
		sclk : OUT std_logic;
		reset_bcd : OUT std_logic;
		bcd_read : OUT std_logic;


		init_bcd : OUT std_logic
		);
	END COMPONENT;
	
	COMPONENT view
	PORT(
		i1 : IN std_logic_vector(3 downto 0);
		i2 : IN std_logic_vector(3 downto 0);
		i3 : IN std_logic_vector(3 downto 0);
		i4 : IN std_logic_vector(3 downto 0);
		i5 : IN std_logic_vector(3 downto 0);
		i6 : IN std_logic_vector(3 downto 0);
		clk : IN std_logic;
		strobe : OUT std_logic_vector(5 downto 0);
		dot : OUT std_logic;
		segment : OUT std_logic_vector(6 downto 0)
		);
	END COMPONENT;
	
	signal sclk_tmp, bcd_initS,read_temp,resetS : std_logic;
	signal disp1, disp2, disp3, disp4, disp5, disp6 : std_logic_vector(3 downto 0);
	signal q_temp, q_temp1 : std_logic_vector(19 downto 0);
	signal mod_temp :std_logic;


begin

	Inst_FSM: FSM PORT MAP(
		clk =>clkin ,
		start_stop =>start_stop_sw ,
		cs => cs_to_adc,
		sclk => sclk_tmp,
		reset_bcd => resetS,
		bcd_read => read_temp,
		init_bcd => bcd_initS
	);
	
	Inst_BCDConv: BCDConv PORT MAP(
		Clock => clkin,
		--Clock => sclk_tmp,
		Reset => resetS,
		Init => bcd_initS,
		ModIn =>sd ,
		ModOut => mod_temp,
		Q => q_temp1
	);
process(read_temp)
begin
	if (read_temp = '1') then
		q_temp <= q_temp1;

	end if;
	if (mod_temp = '1') then
		disp6 <= "0001";
	else
	disp6 <= "1111";
	end if;
end process;
	
	disp5 <= q_temp(3 downto 0);
	disp4 <= q_temp(7 downto 4);
	disp3 <= q_temp(11 downto 8);
	disp2 <= q_temp(15 downto 12);
	disp1 <= q_temp(19 downto 16);
	
	
	PortA_OE <= '0';  -- Activate port A 
	PortA_DIR <= '1';  -- Port A is output 
	PortB_OE <= '0';  -- Activate port B 
	PortB_DIR <= '0';  -- Port B is input
	
	Inst_view: view PORT MAP(
		i1 => disp1,
		i2 => disp2,
		i3 => disp3,
		i4 => disp4,
		i5 => disp5,
		i6 => disp6,
		clk => clkin,
		strobe => strobe_out,
		dot => dot_out,
		segment => seg_out
	);
	sclk_to_adc<=sclk_tmp;
end Behavioral;

