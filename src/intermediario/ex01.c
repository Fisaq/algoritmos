#include <stdio.h>

int parImpar(int num){

  if (num % 2 == 0){
    printf("\nO número %d é par.", num);
  }
  else{
    printf("\nO número %d é ímpar.", num);
  }

  return 0;
}

int main(){

  parImpar(2);
  parImpar(7);

  //Saída:

  //O número 2 é par.
  //O número 7 é ímpar.
  
  return 0;
}
