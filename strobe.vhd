library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.STD_LOGIC_ARITH.ALL;
use IEEE.STD_LOGIC_UNSIGNED.ALL;

entity strobe_dec is
port (
        input: in std_logic_vector(3 downto 0);  
        output : out std_logic_vector( 5 downto 0);
		  dp : out std_logic
    );
end strobe_dec;

architecture Behavioral of strobe_dec is
begin
process (input)

begin
case input is
when "0000"=> output <="111110";  -- '0'
dp <= '0'; 
when "0001"=> output <="111101";  -- '1'
dp <= '0'; 
when "0010"=> output <="111011";  -- '2'
dp <= '0'; 
when "0011"=> output <="110111";  -- '3'
dp <= '0'; 
when "0100"=> output <="101111";  -- '4' 
dp <= '0'; 
when "0101"=> output <="011111";  -- '5
dp <= '0'; 
when others => output <="111111";  -- '0'
dp <= '0';
end case;

end process;



end Behavioral;