#include <stdio.h>
#include <math.h>

#define PI 3.14

int calcAltura(int angulo, int distancia){

  double radianos = angulo * (PI/180);

  double seno = sin(radianos);

  double altura = seno * distancia;

  printf("\nDistância pecorrida: %d", distancia);
  printf("\nAngulo de inclinação°: %d", angulo);
  printf("\n\nAltura alcançada: %.2lf metros", altura);
  
  return 0;
}

int main(){

  calcAltura(45, 200);
  
  return 0;
}
