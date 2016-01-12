library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use ieee.std_logic_unsigned.all;

entity mux6_1 is
port (
      i0 : in std_logic_vector(3 downto 0);
      i1 : in std_logic_vector(3 downto 0);
      i2 : in std_logic_vector(3 downto 0);
      i3 : in std_logic_vector(3 downto 0);
      i4 : in std_logic_vector(3 downto 0);
      i5 : in std_logic_vector(3 downto 0);
		
     sel : in std_logic_vector(3 downto 0);
     bitout : out std_logic_vector( 3 downto 0)
     );
end mux6_1;

architecture Behavioral of mux6_1 is
--

begin
 
process(i0,i1,i2,i3,i4,i5,sel)
begin
case sel is
  when "0000" => bitout <= i0;

  when "0001" => bitout <= i1;
  
  when "0010" => bitout <= i2; 
 
  when "0011" => bitout <= i3; 
  
  when "0100" => bitout <= i4;

  when "0101" => bitout <= i5;
 
  when others => bitout <= i0;
  
end case; 
end process;



end Behavioral;