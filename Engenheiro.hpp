#ifndef ENGENHEIRO_H
#define ENGENHEIRO_H

#include "Empregado.hpp"

class Engenheiro: public Empregado {
	private:
		int projetos;

	public: 
		Engenheiro();

		void set_engenheiro(double salario_Hora, std::string nome1, int projetos1, double taxa1);

		void imprimir_info();

};

#endif