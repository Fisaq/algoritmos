#include <stdio.h>

int convertHora(int segundos){

  int hora = segundos/3600;
  int min = segundos/60;

  int seg = segundos % 60;

  printf("%d segundos corresponde a %d horas %d minutos e %d segundos.", segundos, hora, min, seg);
  
  return 0;
}

int main(){

  convertHora(5000);

  //Saída: 5000 segundos corresponde a 1 horas 83 minutos e 20 segundos.
  
  return 0;
}
