#include <stdio.h>

typedef struct Triangulo{
  double base;
  double altura;
}Triangulo;

int areaTriangulo(Triangulo tngl[], double base, double alt){

  tngl->base = base;
  tngl->altura = alt;

  double area = (tngl->base * tngl->altura)/2.0;

  printf("Área do triângulo: %.2lf cm²", area);
  
  return 0;
}

int main(){

  Triangulo tri[2];

  areaTriangulo(tri, 2, 2);

  //Saída = Área do triângulo: 2.00 cm²
  
  return 0;
}
