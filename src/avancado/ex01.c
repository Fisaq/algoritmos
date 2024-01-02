#include <stdio.h>

void localizaMatriz(){
  
  int nLinhas;
  int nColunas;
  
  printf("\nInforme o número de linhas da matriz: ");
  scanf("%d", &nLinhas);

  printf("\nInforme o número de colunas da matriz: ");
  scanf("%d", &nColunas);

  int el = nLinhas * nColunas;

  int matriz[nLinhas][nColunas];

  for(int l = 0; l < 1; l++){
    for(int c = 0; c < el; c++){
      printf("\nValor %d: ", c + 1);
      scanf("%d", &matriz[l][c]);
    }
  }

  printf("\nMatriz gerada: \n\n");
  for(int l = 0; l < nLinhas; l++){
    for(int c = 0; c < nColunas;c++){
      printf("%d\t",matriz[l][c]);
    }
    printf("\n");
  }

  int valor;
  int encontrado = 0;
  
  printf("\nInforme o valor que você deseja encontrar: ");
  scanf("%d", &valor);

  for(int l = 0; l < nLinhas; l++){
    for(int c = 0; c < nColunas; c++){
      if (matriz[l][c] == valor){
        printf("\nPosição de %d: \nlinha %d \ncoluna %d",valor,l+1,c+1);
        encontrado = 1;
      }
    }
  }

  if(encontrado == 0){
    printf("\nValor não encontrado!");
  }

}

int main(){

  localizaMatriz();
  return 0;
}
