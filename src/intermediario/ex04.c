#include <stdio.h>

int verificaDigito(char tecla){

  if(tecla >= 'a' && tecla <= 'z' || tecla >= 'A' && tecla <= 'Z'){
    printf("O caractere %c é uma letra.", tecla);
  }
  else if (tecla > '0' && tecla < '9'){
    printf("O caractere %c é um dígito.", tecla);
  }
  else{
    printf("O caractere %c é um caractere especial.", tecla);
  }

  return 0;
}

int main(){

  char tecla;

  printf("\nDigite um caractere do teclado: ");
  printf("\nR: ");
  scanf("%c", &tecla);

  verificaDigito(tecla);
  
  return 0;
}
