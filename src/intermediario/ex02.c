#include <stdio.h>

int desconto(double valor_brt){

  double desconto;
  double val_desc;

  if (valor_brt <= 100.00){
    desconto = 0.01;
    val_desc = valor_brt * desconto;
    printf("\n\nValor do desconto: R$ %.2lf", val_desc);
  }
  else if (valor_brt > 100.00 && valor_brt <=500.00){
    desconto = 0.05;
    val_desc = valor_brt * desconto;
    printf("\n\nValor do desconto: R$ %.2lf", val_desc);
  }
  else if (valor_brt > 500.00){
    desconto = 0.1;
    val_desc = valor_brt * desconto;
    printf("\n\nValor do desconto: R$ %.2lf", val_desc);
  }
  
  return 0;
}

int main(){

  double valor_brt;

  printf("\nQual o valor da sua compra? ");
  printf("\nR: ");
  scanf("%lf", &valor_brt);

  desconto(valor_brt);
  
  return 0;
}
