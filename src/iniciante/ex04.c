#include <stdio.h>

#define ICMS 0.17
#define COFINS 0.076
#define PIS_PASEP 0.0165

int impostoProduto(double precInicial){

  double somaImpostos =  (1 + ICMS + COFINS + PIS_PASEP);

  double precFinal = somaImpostos * precInicial;

  printf("\nPreço Inicial: R$ %.2lf", precInicial);
  printf("\nTotal Impostos: R$ %.2lf", somaImpostos);
  printf("\nPreço Final: R$ %.2lf", precFinal);
  
  return 0;
}

int main(){

  double preco = 2445.00;

  impostoProduto(preco);
  
  return 0;
}
