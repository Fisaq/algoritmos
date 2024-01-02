#include <stdio.h>
#include <stdlib.h>

typedef struct fiscal{
  int quantidade;
  float preco;
} notaFiscal;

void imprimeNota(notaFiscal nota[]){

  int qtd;

  printf("\nQuantos produtos deseja cadastrar?");
  printf("\nR: ");
  scanf("%d", &qtd);

  for(int c = 0; c < qtd; c++){
    
    printf("\nPRODUTO %d: ", c + 1);
    
    printf("\n\nQuantidade: ");
    scanf("%d",&nota[c].quantidade);

    printf("Preço: ");
    scanf("%f",&nota[c].preco);
  }

   float *totais = (float*) malloc(qtd * sizeof(float));

  for(int i = 0; i < qtd; i++){
    totais[i] = nota[i].quantidade * nota[i].preco;
  }

  float totalNota = 0;

  for(int x = 0; x < qtd; x++){
    totalNota += totais[x];
  }

  printf("\n----- NOTA FISCAL -----\n");

  for(int y = 0; y < qtd; y++){
    
    printf("\nPRODUTO %d: \n", y + 1);
    printf("\nQuantidade: __________ %d", nota[y].quantidade);
    printf("\nPreço: _______________ R$ %.2f", nota[y].preco);
    printf("\nTotal: _______________ R$ %.2f", totais[y]);
  }

  free(totais);
  
  printf("\n\nTotal Nota: ------------ R$ %.2f", totalNota);
}

int main(){

  notaFiscal nota[2];

  imprimeNota(nota);
  return 0;
}
