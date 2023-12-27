#include <stdio.h>

#define HECTARE 10000

int compTerreno(int largura, int comprimento){

  int area_mq = largura * comprimento;
  double area_hec = area_mq/HECTARE;

  if(largura < 100 || comprimento < 100){
    printf("\nFavor, informar uma altura e comprimento maiores que 100m");
  }
  else{
    printf("\nLargura do Terreno: %dm", largura);
    printf("\nComprimento do Terreno: %dm", comprimento);
    printf("\n\nÁrea: %dm²", area_mq);
    printf("\nÁrea em hectares: %.lf hectares", area_hec);
  }
  
  return 0;
}

int main(){

  compTerreno(99, 100);
  return 0;
}
