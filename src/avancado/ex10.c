#include <stdio.h>
#include <stdlib.h>

void nomeMes(int mes){
  
  int listaMeses[] = {1,2,3,4,5,6,7,
  8,9,10,11,12};

  int verdadeiro = 0;

  for(int c = 0; c < 12; c++){
    if(listaMeses[c] == mes){
      verdadeiro = 1;
    }
  }

  if(verdadeiro == 0){
    printf("\n%d não é um mês válido!!", mes);
    exit(0);
  }
  else{
    switch(mes){
      case 1:
        printf("\nJaneiro");
        break;
      case 2:
        printf("\nFevereiro");
        break;
      case 3:
        printf("\nMarço");
        break;
      case 4:
        printf("\nAbril");
        break;
      case 5:
        printf("\nMaio");
        break;
      case 6:
        printf("\nJunho");
        break;
      case 7:
        printf("\nJulho");
        break;
      case 8:
        printf("\nAgosto");
        break;
      case 9:
        printf("\nSetembro");
        break;
      case 10:
        printf("\nOutubro");
        break;
      case 11:
        printf("\nNovembro");
        break;
      case 12:
        printf("\nDezembro");
        break;
    }
  }
    
}

int exA10(){

  nomeMes(13);
  return 0;
}
