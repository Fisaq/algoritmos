#include <stdio.h>
#include <math.h>

int converteGB(double giga){

  double giConv = giga * pow(10,9);

  printf("%.0lf Gigabytes é equivalente a %.0lf bytes.", giga, giConv);
  
  return 0;
}

int main(){

  int giga = 9;

  converteGB(giga);
  
  return 0;
}
