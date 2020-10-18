#ifndef EMPREGADO_H
#define EMPREGADO_H

#include <iostream>
#include <string>

class Empregado {
	private:
    double salarioHora;
    std::string nome;
    double taxa;

  public:
    Empregado();

    void set_empregado(double salario_Hora, std::string nome1, double taxa1);

    double pagamentoMes(double horasTrabalhadas);
    
    std::string get_nome();

    double get_taxa();
};

#endif