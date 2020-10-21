#include <string>
#include "Empregado.hpp"

class Vendedor : public Empregado {

  public:  	  
	double quotaTotalAnual() {
	  return getQuotaMensalVendas() * 12;
	}

	void print(Vendedor &vendedor){
		std::cout << "Nome: " << vendedor.getNome() << std::endl;
  		std::cout << "Salario Mes: " << vendedor.pagamentoMes() << std::endl;  
  		std::cout << "Quota vendas: " << vendedor.quotaTotalAnual() << std::endl;
	}
	
};

