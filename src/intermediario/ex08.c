#include <stdio.h>

void fatorial(int num){
  
  if(num < 0){
    printf("Favor, informar um valor inteiro positivo.");
  }
  else if(num == 0){
    printf("0! = 1");
  }
  else{
    int fah = 1;
    for(int c = 1; c <= num; c++){
      fah = fah * c;
    }
    printf("\n%d! = %d", num, fah);
  }
}

int main(){

  fatorial(5);
  return 0;
}
