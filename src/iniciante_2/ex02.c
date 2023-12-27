#include <stdio.h>

int resQuo(int a, int b){

  int quociente = a / b;
  int resto = a % b;

  printf("\nA: %d", a);
  printf("\nB: %d", b);
  printf("\n\nQuociente: %d", quociente);
  printf("\nResto: %d", resto);
  
  return 0;
}

int main(){

  resQuo(22, 5);
  
  return 0;
}
