#include <stdio.h>
#include <math.h>

int imc(double peso, double altura){

  double quad_alt = pow(2,altura);

  double imc = peso / quad_alt;

  printf("\nPeso: %.1lfKg", peso);
  printf("\nAltura: %.1lfm", altura);
  printf("\n\nSeu IMC é: %.1lf", imc);

  if(imc < 18.5){
    printf("\nVocê está abaixo do peso.");
  }
  else if (imc > 18.5 && imc <= 24.9){
    printf("\nParabéns você está com o peso ideal!");
  }
  else if (imc > 25.0 && imc <= 29.9){
    printf("\nVocê está levemente acima do peso.");
  }
  else if (imc > 30.0 && imc <= 34.9){
    printf("\nProcure um médico, você está com obesidade grau I.");
  }
  else if (imc > 35.0 && imc <= 39.9){
    printf("\nProcure um médico, você está com obesidade grau II, o que é considerado severo!");
  }
  else{
    printf("\nVocê está quase morrendo!!");
  }
  
  return 0;
}

int main(){

  imc(82.0, 1.8);
  
  return 0;
}
