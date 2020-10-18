#include "Empregado.hpp"

#define jornada_de_trabalho 8

Empregado::Empregado() {
	this->salarioHora = 0;
	this->nome = "";
	this->taxa = 0;
}

void Empregado::set_empregado(double salario_Hora, std::string nome1, double taxa1) {
	this->salarioHora = salario_Hora;
	this->nome = nome1;
	this->taxa = taxa1;
}

double Empregado::pagamentoMes(double horasTrabalhadas) {
	double t = horasTrabalhadas;
	if(horasTrabalhadas > jornada_de_trabalho) {
		t += (horasTrabalhadas - jornada_de_trabalho)/2;
	}
	return t * salarioHora;
}

std::string Empregado::get_nome() {
	return this->nome;
}

double Empregado::get_taxa() {
	return this->taxa;
}
