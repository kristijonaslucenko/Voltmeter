
LIBRARY ieee;
USE ieee.std_logic_1164.ALL;
 
-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--USE ieee.numeric_std.ALL;
 
ENTITY fsmTB IS
END fsmTB;
 
ARCHITECTURE behavior OF fsmTB IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT FSM
    PORT(
         clk : IN  std_logic;
         start_stop : IN  std_logic;
         cs : OUT  std_logic;
         sclk : OUT  std_logic;
         bcd_finish : IN  std_logic;
         reset_bcd : OUT  std_logic;
         init_bcd : OUT  std_logic
        );
    END COMPONENT;
    

   --Inputs
   signal clk : std_logic := '0';
   signal start_stop : std_logic := '0';
   signal bcd_finish : std_logic := '0';

 	--Outputs
   signal cs : std_logic;
   signal sclk : std_logic;
   signal reset_bcd : std_logic;
   signal init_bcd : std_logic;

   -- Clock period definitions
   constant clk_period : time := 10 ns;
   constant sclk_period : time := 10 ns;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: FSM PORT MAP (
          clk => clk,
          start_stop => start_stop,
          cs => cs,
          sclk => sclk,
          bcd_finish => bcd_finish,
          reset_bcd => reset_bcd,
          init_bcd => init_bcd
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
	start_stop<='1';
      -- hold reset state for 100 ns.
     -- wait for 100 ns;	

      wait for clk_period*30;
		bcd_finish<='1';
		wait for clk_period*1;
		bcd_finish<='0';
      
      -- insert stimulus here 

      wait;
   end process;

END;
