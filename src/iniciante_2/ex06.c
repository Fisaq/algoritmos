#include <stdio.h>

typedef struct carro{
  int ano_fab;
  int ano_depre;
  double valor;
} Veiculo;

int valor_depre(Veiculo carro[]){

  double valor_depre = (carro->ano_depre - carro->ano_fab) * 0.1 * carro->valor;

  printf("\nO valor de depreciado do seu carro é de R$ %.2lf", valor_depre);
  
  return 0;
}

int main(){

  Veiculo carro[3];
  
  printf("\nQual o ano de fabricação do seu veículo?");
  printf("\nR: ");
  scanf("%d", &carro->ano_fab);
  
  printf("\nQual o ano de depreciação do seu veículo?");
  printf("\nR: ");
  scanf("%d", &carro->ano_depre);
  
  printf("\nQual o valor de compra do seu veículo?");
  printf("\nR: ");
  scanf("%lf", &carro->valor);

  valor_depre(carro);

  //Saída:

  //O valor de depreciado do seu carro foi R$ x
  
  return 0;
}
