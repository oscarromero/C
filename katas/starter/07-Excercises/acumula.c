#include <stdio.h>

int acumula (int v) {
  static int total = 0;
  total += v;

  return total;
}

int main (int argc, char** argv) {
  acumula(1);
  acumula(2);
  acumula(3);

  int t = acumula(4);

  printf("Total acumulado %d\n", t);

  return 0;
}