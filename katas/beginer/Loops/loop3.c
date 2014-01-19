#include <stdio.h>
#include <math.h>

#define PI 3.14

int main () {
  int i = 1, j = 2;

  for (i = 0, j = 0; i < 1000; i++, j = i) {
    printf("%i\n", j);
  }
}