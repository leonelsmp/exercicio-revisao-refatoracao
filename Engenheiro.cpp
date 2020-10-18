#include "Engenheiro.hpp"

Engenheiro::Engenheiro(){
	Empregado();
	this->projetos = 0;
}

void Engenheiro::set_engenheiro(double salario_Hora, std::string nome1, int projetos1, double taxa1) {
	set_empregado(salario_Hora, nome1, taxa1);
	this->projetos = projetos1;
}

void Engenheiro::imprimir_info() {
	std::cout << "Nome: " << get_nome() << std::endl;
 	std::cout << "Salario Mes: " << pagamentoMes(get_taxa()) << std::endl;
  	std::cout << "Projetos: " << projetos << std::endl;
  	std::cout << std::endl;
}
