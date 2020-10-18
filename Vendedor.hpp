#ifndef VENDEDOR_H
#define VENDEDOR_H

#include "Empregado.hpp"

class Vendedor : public Empregado {
	private:
		double quotaMensalVendas;

  	public:
  		Vendedor();
  		void set_vendedor(double salario_Hora, std::string nome1, double quotaMensalVendas, double taxa1);

  		double quotaTotalAnual();

  		void imprimir_info();
	
};

#endif