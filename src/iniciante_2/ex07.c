#include <stdio.h>

#define IR 0.25
#define INSS 0.11

int calculoSal(double valor_h, int total_h){

  double sal_bruto = valor_h * total_h;

  double imp_IR = sal_bruto * IR;
  double imp_INSS = sal_bruto * INSS;

  double sal_liq = sal_bruto - imp_IR - imp_INSS;

  printf("\nSalário Bruto: R$ %.2lf", sal_bruto);
  printf("\nDesconto IR: R$ %.2lf", imp_IR);
  printf("\nDesconto INSS: R$ %.2lf", imp_INSS);
  printf("\n\nSalário Líquido: R$ %.2lf", sal_liq);
  
  return 0;
}

int main(){

  double valor_h;
  int total_h;

  printf("\nQual o valor da sua hora de trabalho?");
  printf("\nR: ");
  scanf("%lf", &valor_h);

  printf("\nQuantas horas você trabalha no mês (total)?");
  printf("\nR: ");
  scanf("%d", &total_h);

  calculoSal(valor_h, total_h);
  
  return 0;
}
