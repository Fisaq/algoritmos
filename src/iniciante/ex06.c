#include <stdio.h>
#include <math.h>

int bhaskara(int a, int b, int c){

  printf("F(x) = %dx² %dx %d\n",a,b,c);

  double delta = (pow(b,2) - (4 * a * c));

  if(delta < 0){
    printf("A equação não possui raízes reais.");
  }
  else{
    double x1 = (-b + sqrt(delta))/(2 * a); 

    double x2 = (-b - sqrt(delta))/(2 * a);

    printf("\nX1 = %.1f", x1);
    printf("\nX2 = %.1lf", x2);
  }
  return 0;
}

int main(){
  
  bhaskara(1,4,3);

  //Saída: 

  //F(x) = 1x² 4x 3
  //X1 = -1.0
  //X2 = -3.0
  
  return 0;
}
