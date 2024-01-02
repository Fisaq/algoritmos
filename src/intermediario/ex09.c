#include <stdio.h>

void ranking(int num[5]){

  for(int c = 0; c < 5; c++){
    printf("\nNúmero %d: ", c + 1);
    scanf("%d", &num[c]);
  }

  int aux;

  for(int y = 0; y < 5; y++){
    for(int x = 0; x < 4; x++){
      if (num[x] > num[x + 1]){
        aux = num[x];
        num[x] = num[x + 1];
        num[x + 1] = aux;
      }
    }
  }

  printf("\nNúmeros ordenados: \n");
  for(int z = 0; z < 5; z ++){
    printf("\n%d", num[z]);
  }

  printf("\n\nMaior número: %d", num[4]);
  printf("\nMenor número: %d", num[0]);
}

int main(){

  int num[5];

  ranking(num);
  return 0;
}
