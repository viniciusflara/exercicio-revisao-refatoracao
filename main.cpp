#include "Engenheiro.cpp"
#include "Vendedor.cpp"

int main() {

  Engenheiro eng1;
  eng1.setNome("Joao Snow");
  eng1.setSalarioHora(35);
  eng1.setProjetos(3);
  eng1.setHorasTrabalhadas(9.5);
  eng1.print(eng1);
  std::cout << std::endl;
  
  Engenheiro eng2;
  eng2.setNome("Daniela Targaryen");
  eng2.setSalarioHora(30);
  eng2.setProjetos(1);
  eng2.setHorasTrabalhadas(8); 
  eng2.print(eng2);  
  std::cout << std::endl;
  
  Engenheiro eng3;
  eng3.setNome("Bruno Stark");
  eng3.setSalarioHora(30);
  eng3.setProjetos(2);
  eng3.setHorasTrabalhadas(8);
  eng3.print(eng3); 
  std::cout << std::endl;
  
  
  Vendedor vend1;
  vend1.setNome("Tonho Lannister");
  vend1.setSalarioHora(20);
  vend1.setQuotaMensalVendas(5000);
  vend1.setHorasTrabalhadas(6);
  vend1.print(vend1);
  std::cout << std::endl;
  
  Vendedor vend2;
  vend2.setNome("Jose Mormont");
  vend2.setSalarioHora(25);
  vend2.setQuotaMensalVendas(3000);
  vend2.setHorasTrabalhadas(8);
  vend2.print(vend2);
  std::cout << std::endl;  
	
  Vendedor vend3;
  vend3.setNome("Sonia Stark");
  vend3.setSalarioHora(30);
  vend3.setQuotaMensalVendas(4000);
  vend3.setHorasTrabalhadas(8);
  vend3.print(vend3);
  
  return 0;	
}