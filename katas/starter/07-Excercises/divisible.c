#include <stdio.h>

int main (int argc, char** argv) {
  int x, y = 10;

  printf("%i es divisible por ", y);

  for (x = 1; ; x++) {
    if ((y % x) != 0) continue;
    
    printf("%i", x);

    if ((x >= y)) break;

    printf(",");
  }

  printf("\n");

  return 0;
}