#include <stdio.h>

void decomposicao(int num){
  
  if (num <= 1000 || num >= 9999){
    printf("Favor, informe um número com até 4 casas decimais.");
  }
  else{

    int unidade;;
    int dezena;
    int centena;
    int milhar;

    char numStr[5];

    int tamvetor = sizeof(numStr)/sizeof(numStr[0]);

    sprintf(numStr, "%d", num);

    char arrayNum[4];

    for (int c = 0; c < tamvetor; c++){
      arrayNum[c] = numStr[c];
    }


    for (int i = 0; i < tamvetor; i++){

      if (i == 0){
        unidade = (int)(arrayNum[i]- '0'); //Subtrai o último caractere ASCII da operação
      }
      else if(i == 1){
        dezena = (int)(arrayNum[i]- '0');
      }
      else if (i == 2){
        centena = (int)(arrayNum[i]- '0');
      }
      else if (i == 3){
        milhar = (int)(arrayNum[i]- '0');
      }
      
    }

    printf("O número %d é decomposto em: \n%d unidades \n%d dezenas \n%d centenas \n%d milhares",num, unidade, dezena, centena, milhar);
    
  }
  
}

int main(){

  decomposicao(1273);
  
  /*Saída:
    O número 1273 é decomposto em: 
    1 unidades
    2 dezenas
    7 centenas
    3 milhares
  */
  
  return 0;
}
