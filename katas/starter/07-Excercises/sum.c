#include <stdio.h>

int main (int argc, char** argv) {
  int a, b;

  printf("Introduzca dos números: ");
  scanf("%i %i", &a, &b);

  printf("La suma de %i + %i es %i\n", a, b, (a + b));

  return 0;
}
