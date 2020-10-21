#include <string>
#include "Empregado.hpp"

class Engenheiro : public Empregado{

public:
  
  int getProjetos()
  {
    return projetos;
  }

  void setProjetos(int p)
  {
    projetos = p;
  }

  void print(Engenheiro &engenheiro){
		std::cout << "Nome: " << engenheiro.getNome() << std::endl;
    std::cout << "Salario Mes: " << engenheiro.pagamentoMes() << std::endl;
    std::cout << "Projetos: " << engenheiro.getProjetos() << std::endl;
	}

private:
  int projetos;
};
