#include <stdio.h>

void multiTres(){

  printf("\nMúltiplos de 3: \n");
  for(int c = 0; c <=100; c++){

    if(c % 3 == 0){
      printf("\n%d", c);
    }
  }
}

int main(){

  multiTres();
  
  return 0;
}
