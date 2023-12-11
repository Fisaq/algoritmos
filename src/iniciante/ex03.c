#include <stdio.h>

#define PI 3.1416

int calcPerimetroPizza(int raio){

  double peri = 2.0 * PI * raio;

  printf("O perímetro da pizza é: %.2lfcm", peri);

  return 0;
}

int main(){

  calcPerimetroPizza(3);

  // Saída: O perímetro da pizza é: 18.85cm
  
  return 0;
}
