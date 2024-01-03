#include <stdio.h>
#include <string.h>
#include <ctype.h>

void convString(char string[]){

  printf("\nDigite alguma palavra: ");
  printf("\nR: ");
  scanf("%s", string);

  int tamStr = strlen(string);

  char maiuscula[tamStr];
  char minuscula[tamStr];

  for(int c = 0; c < tamStr; c++){
    maiuscula[c] = toupper((unsigned char) string[c]);
  }

  for(int c = 0; c < tamStr; c++){
    minuscula[c] = tolower((unsigned char) string[c]);
  }
  

  printf("\nOriginal: %s", string);
  
  printf("\n\nMaiúscula: ");

  for(int s = 0; s < tamStr; s++){
    printf("%c", maiuscula[s]);
  }

  printf("\n\nMinúscula: ");

  for(int s = 0; s < tamStr; s++){
    printf("%c", minuscula[s]);
  }
  
}

int main(){
  
  char string[30];
  convString(string);

  /*
    Saída:
    
    Digite alguma palavra: 
    R: Ludmila
    
    Original: Ludmila
    
    Maiúscula: LUDMILA
    
    Minúscula: ludmila
  */

  return 0;
}
