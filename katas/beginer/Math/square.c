/*
 *
 * Author.: Oscar Romero
 * Date...: 2013-12-22
 * About..: This program computes the square of N.
 *
 */
#include <stdio.h>

int main (int argc, char** argv) {
  int a, b, c;
  int result;

  a = 5;
  b = 4;
  c = 3;

  result = (b * b) - (4 * a * c);

  /* Use the () remove doubts about the order operations. */
  printf("%i squared - (4 * %i * %i) => %i\n", b, a, c, result);

  return 0;
}
