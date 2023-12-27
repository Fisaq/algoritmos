#include <stdio.h>

int converterTemp(int temp){

  double fah = (1.8 * temp) + 32;

  printf("\nTemperatura em °C: %d°", temp);
  printf("\nConvertido para °F: %.1lf°", fah);
  
  return 0;
}

int exI203(){

  converterTemp(22);
  
  return 0;
}
