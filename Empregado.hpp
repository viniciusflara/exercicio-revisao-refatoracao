#ifndef EMPREGADO_H
#define EMPREGADO_H

#include <iostream>
#include <string>

class Empregado {
	
  public:
    std::string getNome(){
    return nome;
  }

  void setNome(std::string n){
    nome = n;
  }
  double getSalarioHora(){
    return salarioHora;
  }  
  void setSalarioHora(double salario){
    salarioHora = salario;
  }
  double getQuotaMensalVendas(){
    return quotaMensalVendas;
  }
  void setQuotaMensalVendas(double quota){
    quotaMensalVendas = quota;
  }
  void setHorasTrabalhadas(double ht){
    horasTrabalhadas = ht;
  }
  double getHorasTrabalhadas(){
    return horasTrabalhadas;
  }
    double pagamentoMes() {
 
      double t = getHorasTrabalhadas();
	  
	    //Cálculo de hora extra (+50% se horasTrabalhadas > 8)
      if (horasTrabalhadas > 8) {
        double x = horasTrabalhadas - 8;
        t += x / 2;
      }
	    return t * salarioHora;
    }

    private:
    std::string nome;
    double salarioHora;  
    double quotaMensalVendas; 
    double horasTrabalhadas;
	
};

#endif