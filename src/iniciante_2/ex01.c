#include <stdio.h>

#define TOTAL 3

int media(double a, double b, double c){

  double media = (a + b + c)/TOTAL;

  printf("\nA: %.2lf", a);
  printf("\nB: %.2lf", b);
  printf("\nC: %.2lf", c);
  printf("\n\nMédia aritmética: %.2lf", media);
  
  return 0;
}

int exI201(){

  media(7,2,5);
    
  return 0;
}
