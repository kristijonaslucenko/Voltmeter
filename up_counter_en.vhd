library ieee;
  use ieee.std_logic_1164.all;
  use ieee.std_logic_unsigned.all;

 entity up_counter_en is
     generic (
              BIT_WIDTH   : INTEGER:=4;
				  LIMIT_UP		: std_logic_vector(3 downto 0);
				  LIMIT_DOWN	: std_logic_vector(3 downto 0)
     );
     port (
          clk     : in  std_logic;
          reset_n : in  std_logic;
          en      : in  std_logic;
			 down_count : in std_logic;
			 step_up : out std_logic;
			 count   : out std_logic_vector(BIT_WIDTH-1 downto 0) := (others => '0')
     );
 end up_counter_en;

architecture behav of up_counter_en is

	signal w: std_logic_vector(BIT_WIDTH-1 downto 0) := (others => '0');
	signal stepping_up: std_logic;

begin

first_count:	process(en, clk, reset_n)
	   Variable Q: std_logic_vector(BIT_WIDTH-1 downto 0) := (others => '0');
begin
	
		if(reset_n = '1') then 
		 
				Q := (others => '0');
			 
      elsif rising_edge(clk) then
				if en = '1' then
				
					if (down_count = '0') then 
						if Q = LIMIT_UP then			
							Q := LIMIT_DOWN;
						else
							Q  := Q+1;
						end if;
					 
            else 
				 
						if Q = LIMIT_DOWN then			
							Q := LIMIT_UP;
						else
							Q  := Q-1;
						end if;
						
            end if;  
				           
				 
		end if;
		
	w<=Q;
	count <= Q;
end if;	 

end process first_count;

stepping_up <= '1' when (w = LIMIT_UP and down_count='0') or (w = LIMIT_DOWN and down_count = '1')
			else
		  '0';
		  
step_up <= stepping_up;

end behav;