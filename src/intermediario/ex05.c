#include <stdio.h>

int ehBissexto(int ano){

  if ((ano % 4 == 0 && ano % 100 != 0) || ano % 400 == 0){
    printf("%d é um ano bissexto.", ano);
  }
  else{
    printf("%d não é um ano bissexto.", ano);
  }
  
  return 0;
}

int main(){

  int ano;
  
  printf("\nFavor, informe um ano: ");
  printf("\nR: ");
  scanf("%d", &ano);

  ehBissexto(ano);
  
  return 0;
}
