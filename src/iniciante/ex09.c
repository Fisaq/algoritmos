#include <stdio.h>

int diasIdade(int dias){

  int anos = dias/365;
  int meses = dias/30;
  int d = dias % 30;

  printf("%d dias são equivalentes a %d ano(s) %d meses e %d dias.", dias, anos,meses, d);
  
  return 0;
}


int main(){
  
  diasIdade(397);

  //Saída: 397 dias são equivalentes a 1 ano(s) 13 meses e 7 dias.
  
  return 0;
}
