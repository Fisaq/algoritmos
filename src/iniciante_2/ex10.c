#include <stdio.h>

int tabuada(int num){

  printf("TABUADA DE %d: \n", num);
  for(int c = 0; c <=10; c++){
    printf("\n %d * %d = %d", num, c, num * c);
  }
  
  return 0;
}

int main(){

  tabuada(2);

  /*Saída:
  
  TABUADA DE 2: 

   2 * 0 = 0
   2 * 1 = 2
   2 * 2 = 4
   2 * 3 = 6
   2 * 4 = 8
   2 * 5 = 10
   2 * 6 = 12
   2 * 7 = 14
   2 * 8 = 16
   2 * 9 = 18
   2 * 10 = 20
  */

  return 0;
}
