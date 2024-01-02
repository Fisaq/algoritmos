#include <stdio.h>

void fibonacci(int tam){

  int fibo = 0;
  int seqFibo[tam];

  for(int c = 0; c < tam; c++){
   if (c == 0){
     seqFibo[c] = 0;
   }
   else if (c == 1){
     seqFibo[c] = 1;
   }
   else{
     fibo = seqFibo[c - 1] + seqFibo[c - 2];
     seqFibo[c] = fibo;
   }  
  }

  printf("\nSequência dos %d primeiros números de Fibonacci: \n", tam);

  for(int i = 0; i < tam; i++){
    printf("%d ", seqFibo[i]);
  }
}

int main(){

  fibonacci(10);

  /*
    Saída:
    Sequência dos 10 primeiros números de Fibonacci: 
    0 1 1 2 3 5 8 13 21 34 
  */
  return 0;
}
