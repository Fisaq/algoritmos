#include <stdio.h>
#include <math.h>

int distanciaPontos(int x1, int y1, int x2, int y2){

  printf("\nPonto A: (%d,%d)",x1,y1);
  printf("\nPonto B: (%d,%d)",x2,y2);

  int sub_x = x2 - x1;
  int sub_y = y2 - y1;

  int sub_x_quad = pow(sub_x,2);
  int sub_y_quad = pow(sub_y,2);

  int soma_quad = sub_x_quad + sub_y_quad;

  double distancia = sqrt(soma_quad);

  printf("\n\nA distãncia entre A e B é %.2lf",distancia);
  
  return 0;
}

int main(){

  distanciaPontos(1, 2, 7, 8);
  
  return 0;
}
