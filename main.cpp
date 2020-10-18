#include "Engenheiro.hpp"
#include "Vendedor.hpp"

int main() {

  Engenheiro v_eng[3];
  v_eng[0].set_engenheiro(35.0,"Joao Snow",3, 9.5);
  v_eng[1].set_engenheiro(30.0,"Daniela Targaryen",1, 8.0);
  v_eng[2].set_engenheiro(30.0,"Bruno Stark",2, 8.0);

  for(int x = 0; x < 3; x++) {
    v_eng[x].imprimir_info();
  }

  Vendedor v_ven[3];
  v_ven[0].set_vendedor(20.0,"Tonho Lannister",5000.0, 6.0);
  v_ven[1].set_vendedor(25.0,"Jose Mormont",3000.0, 8.0);
  v_ven[2].set_vendedor(30.0,"Sonia Stark",4000.0, 8.0);

  for(int x = 0; x < 3; x++) {
    v_ven[x].imprimir_info();
  }
  
  return 0;	
}