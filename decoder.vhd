library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.STD_LOGIC_ARITH.ALL;
use IEEE.STD_LOGIC_UNSIGNED.ALL;

entity dec1_2 is
port (  
        bcd : in std_logic_vector(3 downto 0);  
        segment7 : out std_logic_vector(6 downto 0) 
    );
end dec1_2;

architecture Behavioral of dec1_2 is
begin
process (bcd)

begin
case  bcd is
when "0000"=> segment7 <="0111111";  -- '0'
when "0001"=> segment7 <="0000110";  -- '1'
when "0010"=> segment7 <="1011011";  -- '2'
when "0011"=> segment7 <="1001111";  -- '3'
when "0100"=> segment7 <="1100110";  -- '4' 
when "0101"=> segment7 <="1101101";  -- '5'
when "0110"=> segment7 <="1111101";  -- '6'
when "0111"=> segment7 <="0000111";  -- '7'
when "1000"=> segment7 <="1111111";  -- '8'
when "1001"=> segment7 <="1101111";  -- '9'
when "1010"=> segment7 <="1111001";  -- 'error'
when "1111"=> segment7 <="0000000";  -- '-'
when others=> segment7 <="0000000"; 
end case;

end process;



end Behavioral;