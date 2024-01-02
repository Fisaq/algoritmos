#include <stdio.h>

void convDec(int num){

  int resto[num];
  int aux = num;
  int cont = 0;

  while(aux > 0){
      resto[cont] = (aux % 2);
      aux = aux / 2;
      cont++;  
  }

  printf("\nNúmero decimal: %d", num);

  printf("\nNúmero em binário: ");

  //Decrementa do último valor do contador até o primeiro
  for(int i = cont - 1; i >= 0; i--){
    printf("%d ", resto[i]);
  }
}

int main(){

  convDec(43);

  /*Saída:
    Número decimal: 17
    Número em binário: 1 0 0 0 1 
  */
  
  return 0;
}
