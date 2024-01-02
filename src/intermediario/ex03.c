#include <stdio.h>

int classificaoNota(int nota){

  if(nota <=1){
    printf("\nNota ruim.");
  }
  else if (nota ==2){
    printf("\nNota insuficiente.");
  }
  else if (nota == 3){
    printf("\nNota suficiente.");
  }
  else if (nota == 4){
    printf("\nNota boa.");
  }
  else if (nota == 5){
    printf("\nNota ótima.");
  }
  else{
    printf("\nNota inválida.");
  }
  return 0;
}

int main(){

  classificaoNota(1);
  classificaoNota(2);
  classificaoNota(3);
  classificaoNota(4);
  classificaoNota(5);
  classificaoNota(6);

  /*
  Saída:
  
  Nota ruim.
  Nota insuficiente.
  Nota suficiente.
  Nota boa.
  Nota ótima.
  Nota inválida.
  */
  
  return 0;
}
