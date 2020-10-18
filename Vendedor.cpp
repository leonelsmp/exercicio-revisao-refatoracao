#include "Vendedor.hpp"

#define meses_no_ano 12

Vendedor::Vendedor() {
	Empregado();
	this->quotaMensalVendas = 0;
}

void Vendedor::set_vendedor(double salario_Hora, std::string nome1, double quotaMensalVendas1, double taxa1) {
	set_empregado(salario_Hora, nome1, taxa1);
	this->quotaMensalVendas = quotaMensalVendas1;
}

double Vendedor::quotaTotalAnual() {
	return quotaMensalVendas * meses_no_ano;
}

void Vendedor::imprimir_info() {
	std::cout << "Nome: " << get_nome() << std::endl;
	std::cout << "Salario Mes: " << pagamentoMes(get_taxa()) << std::endl;  
	std::cout << "Quota vendas: " << quotaTotalAnual() << std::endl;
	std::cout << std::endl;
}


