library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

entity counter is
 generic (upTo: INTEGER:=4);
    Port (  clk_en: in std_logic;
           clk_in : in  STD_LOGIC;
           clk_out: out STD_LOGIC);
end counter;

architecture Behavioral of counter is


signal counter: integer range 0 to upTo:=0;

begin

process (clk_in, clk_en) 

begin
	if clk_en = '0' then
		counter <= 0 ; 
 
	elsif  rising_edge(clk_in) then
		if clk_en='1' then
				if counter = upTo then
					counter <= 0;
		else 
			counter<= counter + 1;
				end if;
		end if;
	end if;
	
end process;

clk_out<='1' when counter = upTo
	else '0';
	
end Behavioral;