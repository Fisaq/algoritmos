#include <stdlib.h>
#include <stdio.h>

void alocaMemoria(int linhas, int colunas){

  int **mapa;
  
  //A memória é alocada dinâmicamente conforme a quantidade de linhas e colunas
  mapa = malloc(sizeof(int*) * linhas);
  for(int i = 0; i < linhas; i++){
    mapa[i] = malloc(sizeof(int*) * colunas);
  }

  for(int i = 0; i < linhas; i++){
    for(int j = 0; j < colunas; j++){
      mapa[i][j] = 1;
    }
  }

  for (int i = 0; i < linhas; i++){
    for (int j = 0; j < colunas; j++){
      printf("%d", mapa[i][j]);
    }
    printf("\n");
  }

  for (int c = 0; c < linhas; c++){
    free(mapa[c]);
  }
  free(mapa);
}

int main (){

  alocaMemoria(5,10);
  /*Saída:
    1111111111
    1111111111
    1111111111
    1111111111
    1111111111
  */
  return 0;
}
