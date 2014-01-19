/*
 *
 * Author.: Oscar Romero
 * Date...: 2013-12-22
 * About..: This program use simple math.
 *
 */
#include <stdio.h>

int main (int argc, char** argv) {
  /* Declare four integers. */
  int a = 1;
  int b = 2;
  int c = 3;
  int d = 4;
  int answer;

  /* Print initial values. */
  printf("a => %i\t b=> %i\t c=>%i\t d => %i\n\n", a, b, c, d);

  /* Substraction. */
  answer = a - b;
  printf("a - b = %i\n", answer);

  /* Precedence problem, want addition then multiplication. */
  answer = a + b * c;
  printf("a + b * c = %i\n", answer);

  /* Precedence example. */
  answer = ( a + b ) * c;
  printf("( a + b ) * c = %i\n", answer);

  return 0;
}
