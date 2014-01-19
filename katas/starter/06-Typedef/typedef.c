#include <stdio.h>

int main (void) {
  typedef int Edad;
  typedef char * String;
  typedef struct {
    float x;
    float y;
  } Punto;

  Edad edad = 10;
  Punto p = {1, 2};

  printf("%i\n", edad);
  printf("X = %f Y = %f\n", p.x, p.y);
}