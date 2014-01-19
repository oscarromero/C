#include <stdio.h>
#include "polinomio.h"

int main () {
  a = 1;
  b = -1;
  c = -2;

  /*
  float r1 = raiz1();
  float r2 = raiz2();
  */
  
  float r1, r2;
  raices(&r1, &r2);

  printf("Raiz 1 = %f\n", r1);
  printf("Raiz 2 = %f\n", r2);

  return 0;
}