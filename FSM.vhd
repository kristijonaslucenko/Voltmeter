library IEEE;
use IEEE.STD_LOGIC_1164.ALL;


entity FSM is
    Port ( clk : in  STD_LOGIC;
           start_stop : in  STD_LOGIC;
           cs : out  STD_LOGIC;
           sclk : out  STD_LOGIC;
			  reset_bcd : out std_logic;
			  bcd_read : out std_logic;
           init_bcd : out  STD_LOGIC);
end FSM;

architecture Behavioral of FSM is

COMPONENT counter
generic (upTo : integer :=3) ;
	PORT(
		clk_en : IN std_logic;
		clk_in : IN std_logic;          
		clk_out : OUT std_logic
		);
	END COMPONENT;

type state_type is (idle,leadingD,reading,trailingD);
signal current_s,next_s: state_type;
--counter signals 
signal en_10:std_logic;
signal en_4:std_logic;
signal en_16:std_logic;

signal step10:std_logic;
signal step4:std_logic;
signal step16:std_logic;
--
begin
	--Counter entities start
	counter4: counter 
	generic map(upTo =>4) 
	PORT MAP(
		clk_in => clk,
		clk_out => step4,
		clk_en=> en_4
	);
		counter10: counter 
	generic map(upTo =>10) 
	PORT MAP(
		clk_in => clk,
		clk_out => step10,
		clk_en=> en_10	);
		
		counter16: counter 
	generic map(upTo =>12) 
	PORT MAP(
		clk_in => clk,
		clk_out => step16,
		clk_en=> en_16);
	--Counter entities stop
	
	
--state machine process start.	
process (clk,start_stop)

begin
 if (start_stop='0') then
  current_s <= idle;  --default state .
elsif falling_edge(clk) then
  current_s <= next_s;   --state change.
end if;
end process;
--state machine process stop.

--state machine logic start
process (clk,current_s,step16, step10, step4)
begin  
	  case current_s is
		--idle mode
     when idle =>        --when current state is "idle" 
		sclk<=clk;
		cs <= '1';
		
		en_4 <= '0';
		en_10 <= '1';
		en_16 <= '0';
		
		init_bcd<='0';
		reset_bcd<='1';
		bcd_read <='0';

	  if (step10='1' ) then -- waiting for delay signal to change state
      next_s <= leadingD;
     else
      next_s <= idle;
     end if; 
	  
	  
	  
		--Leding bits mode
     when leadingD =>        --when current state is "idle" 
		sclk<=clk;
		cs <= '0';
		
		en_4 <= '1';
		en_10 <= '0';
		en_16 <= '0';
		
		init_bcd<='1';
		reset_bcd<='0';

		bcd_read <='0';

	  if (step4='1' ) then -- waiting for delay signal to change state
      next_s <= reading;
     else
      next_s <= leadingD;
     end if; 
	    
		--reading mode
     when reading =>        --when current state is "idle" 
		sclk<=clk;
		cs <= '0';
		
		en_4 <= '0';
		en_10 <= '0';
		en_16 <= '1';
		
		init_bcd<='0';
		reset_bcd<='0';

		bcd_read <='0';

	  if (step16='1' ) then -- waiting for delay signal to change state
      next_s <= trailingD;
		bcd_read <='1';
     else
      next_s <= reading;
     end if; 
	  
	  

		--trailing mode
     when trailingD =>        
		sclk<=clk;
		cs <= '0';
		
		en_4 <= '1';
		en_10 <= '0';
		en_16 <= '0';
		
		init_bcd<='0';
		reset_bcd<='1';
		
		bcd_read <='0';


	  if (step4='1' ) then -- waiting for delay signal to change state
      next_s <= idle;
     else
      next_s <= trailingD;
     end if; 
	end case;
end process;

end Behavioral;

