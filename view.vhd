
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;



entity view is
    Port ( i1 : in  STD_LOGIC_VECTOR (3 downto 0);
           i2 : in  STD_LOGIC_VECTOR (3 downto 0);
           i3 : in  STD_LOGIC_VECTOR (3 downto 0);
           i4 : in  STD_LOGIC_VECTOR (3 downto 0);
           i5 : in  STD_LOGIC_VECTOR (3 downto 0);
           i6 : in  STD_LOGIC_VECTOR (3 downto 0);
			  clk : in STD_LOGIC;
           strobe : out  STD_LOGIC_VECTOR (5 downto 0);
           dot : out  STD_LOGIC;
           segment : out  STD_LOGIC_VECTOR (6 downto 0));
end view;

architecture Behavioral of view is

COMPONENT mux6_1
	PORT(
		i0 : IN std_logic_vector(3 downto 0);
		i1 : IN std_logic_vector(3 downto 0);
		i2 : IN std_logic_vector(3 downto 0);
		i3 : IN std_logic_vector(3 downto 0);
		i4 : IN std_logic_vector(3 downto 0);
		i5 : IN std_logic_vector(3 downto 0);
		sel : IN std_logic_vector(3 downto 0);          
		bitout : OUT std_logic_vector(3 downto 0)
		);
	END COMPONENT;
	
	COMPONENT dec1_2
	PORT(
	  
		bcd : IN std_logic_vector(3 downto 0);          
		segment7 : OUT std_logic_vector(6 downto 0)
		);
	END COMPONENT;
	
		COMPONENT strobe_dec
	PORT(
		input : IN std_logic_vector(3 downto 0);          
		output : OUT std_logic_vector(5 downto 0);
		dp : OUT std_logic
		);
	END COMPONENT;
	
COMPONENT up_counter_en
GENERIC (
		BIT_WIDTH   : INTEGER;
		LIMIT_UP		: std_logic_vector(3 downto 0);
		LIMIT_DOWN	: std_logic_vector(3 downto 0)
    );
	PORT(
	clk : IN std_logic;
		reset_n : IN std_logic:='0';
		en : IN std_logic:='1';
		down_count : IN std_logic:='0';
		step_up : OUT std_logic:='1';
		count : OUT std_logic_vector(3 downto 0)
		);
	END COMPONENT;
	
	signal mux_to_dec: std_logic_vector (3 downto 0);
	
	signal mux_sel_temp: std_logic_vector (3 downto 0);

begin


	Inst_mux6_1: mux6_1 PORT MAP(
		i0 => i1,
		i1 => i2,
		i2 => i3,
		i3 => i4,
		i4 => i5,
		i5 => i6,
	
		sel => mux_sel_temp,
		bitout => mux_to_dec
	);
	
	Inst_dec1_2: dec1_2 PORT MAP(
		
		bcd => mux_to_dec ,
		segment7 => segment
	);
	
		Inst_strobe_dec: strobe_dec PORT MAP(
		input => mux_sel_temp,
		output => strobe,
		dp => dot
	);
	
	Inst_up_counter_en: up_counter_en 
	generic map(
              BIT_WIDTH   => 4,
				  LIMIT_UP	  => "0101",
				  LIMIT_DOWN  => "0000"
    ) 
	PORT MAP(
		clk => clk,
		reset_n => open,
		en => open,
		down_count => open,
		step_up => open,
		count => mux_sel_temp
	);
end Behavioral;

