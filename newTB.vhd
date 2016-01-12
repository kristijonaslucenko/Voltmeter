--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   17:04:00 12/18/2013
-- Design Name:   
-- Module Name:   C:/Users/Admin/Desktop/Sensor/Sensor/newTB.vhd
-- Project Name:  Sensor
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: struc_top
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
 
ENTITY newTB IS
END newTB;
 
ARCHITECTURE behavior OF newTB IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT struc_top
    PORT(
         sd : IN  std_logic;
         clkin : IN  std_logic;
         start_stop_sw : IN  std_logic;
         cs_to_adc : OUT  std_logic;
         sclk_to_adc : OUT  std_logic;
         PortA_OE : OUT  std_logic;
         PortA_DIR : OUT  std_logic;
         PortB_OE : OUT  std_logic;
         PortB_DIR : OUT  std_logic;
         seg_out : OUT  std_logic_vector(6 downto 0);
         dot_out : OUT  std_logic;
         strobe_out : OUT  std_logic_vector(5 downto 0)
        );
    END COMPONENT;
    

   --Inputs
   signal sd : std_logic := '0';
   signal clkin : std_logic := '0';
   signal start_stop_sw : std_logic := '0';

 	--Outputs
   signal cs_to_adc : std_logic;
   signal sclk_to_adc : std_logic;
   signal PortA_OE : std_logic;
   signal PortA_DIR : std_logic;
   signal PortB_OE : std_logic;
   signal PortB_DIR : std_logic;
   signal seg_out : std_logic_vector(6 downto 0);
   signal dot_out : std_logic;
   signal strobe_out : std_logic_vector(5 downto 0);

   -- Clock period definitions
   constant clkin_period : time := 10 ns;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: struc_top PORT MAP (
          sd => sd,
          clkin => clkin,
          start_stop_sw => start_stop_sw,
          cs_to_adc => cs_to_adc,
          sclk_to_adc => sclk_to_adc,
          PortA_OE => PortA_OE,
          PortA_DIR => PortA_DIR,
          PortB_OE => PortB_OE,
          PortB_DIR => PortB_DIR,
          seg_out => seg_out,
          dot_out => dot_out,
          strobe_out => strobe_out
        );

   -- Clock process definitions
   clkin_process :process
   begin
		clkin <= '0';
		wait for clkin_period/2;
		clkin <= '1';
		wait for clkin_period/2;
   end process;
 

   -- Stimulus process
   stim_proc: process
   begin		
     start_stop_sw<='1';
	--14 cycles 10 to init CS and 4 for zero dummies
	sd<='0';
   wait for clkin_period;
   sd <= '0';
   wait for clkin_period;
    sd <= '0';
   wait for clkin_period;
     sd<= '0';
   wait for clkin_period;
     sd <= '0';
   wait for clkin_period;
     sd <= '0';
   wait for clkin_period;
     sd <= '0';
   wait for clkin_period;
     sd <= '0';
   wait for clkin_period;
   sd <= '1';
   wait for clkin_period;
     sd <= '1';
   wait for clkin_period;
     sd <= '0';
   wait for clkin_period;
     sd <= '0';
   wait for clkin_period;
     sd <= '0';
   wait for clkin_period;
     sd <= '0';
   wait for clkin_period;

	--16 cycles real SD data, 19200
	sd<='0';
   wait for clkin_period;
   sd <= '0';
   wait for clkin_period;
    sd <= '0';
   wait for clkin_period;
     sd<= '0';
   wait for clkin_period;
     sd <= '0';
   wait for clkin_period;
     sd <= '0';
   wait for clkin_period;
     sd <= '0';
   wait for clkin_period;
     sd <= '0';
   wait for clkin_period;
   sd <= '1';
   wait for clkin_period;
     sd <= '1';
   wait for clkin_period;
     sd <= '0';
   wait for clkin_period;
     sd <= '0';
   wait for clkin_period;
     sd <= '0';
   wait for clkin_period;
     sd <= '0';
   wait for clkin_period;
     sd <= '0';
   wait for clkin_period;
     sd <= '0';
   wait for clkin_period;
	--4 cycles trailing dummies
	    sd <= '0';
   wait for clkin_period;
     sd <= '0';
   wait for clkin_period;
     sd <= '0';
   wait for clkin_period;
     sd <= '0';
   wait for clkin_period;
	
	--14 cycles 10 to init CS and 4 for zero dummies
	sd<='0';
   wait for clkin_period;
   sd <= '0';
   wait for clkin_period;
    sd <= '0';
   wait for clkin_period;
     sd<= '0';
   wait for clkin_period;
     sd <= '0';
   wait for clkin_period;
     sd <= '0';
   wait for clkin_period;
     sd <= '0';
   wait for clkin_period;
     sd <= '0';
   wait for clkin_period;
   sd <= '1';
   wait for clkin_period;
     sd <= '1';
   wait for clkin_period;
     sd <= '0';
   wait for clkin_period;
     sd <= '0';
   wait for clkin_period;
     sd <= '0';
   wait for clkin_period;
     sd <= '0';
   wait for clkin_period;

	--16 cycles real SD data, 22400
	sd<='0';
   wait for clkin_period;
   sd <= '0';
   wait for clkin_period;
    sd <= '0';
   wait for clkin_period;
     sd<= '0';
   wait for clkin_period;
     sd <= '0';
   wait for clkin_period;
     sd <= '0';
   wait for clkin_period;
     sd <= '0';
   wait for clkin_period;
     sd <= '0';
   wait for clkin_period;
   sd <= '1';
   wait for clkin_period;
     sd <= '1';
   wait for clkin_period;
     sd <= '1';
   wait for clkin_period;
     sd <= '0';
   wait for clkin_period;
     sd <= '0';
   wait for clkin_period;
     sd <= '0';
   wait for clkin_period;
     sd <= '0';
   wait for clkin_period;
     sd <= '0';
   wait for clkin_period;
	--4 cycles trailing dummies
	    sd <= '0';
   wait for clkin_period;
     sd <= '0';
   wait for clkin_period;
     sd <= '0';
   wait for clkin_period;
     sd <= '0';
   wait for clkin_period;
      wait;
   end process;

END;
