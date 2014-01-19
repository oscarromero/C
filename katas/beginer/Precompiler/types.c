/*
 *
 * Author.: Oscar Romero
 * Date...: 2013-12-22
 * About..: Use the diferent formats for each data type.
 *
 */
#include <stdio.h>

int main (int argc, char** argv) {
  int a    = 321;
  char b   = 'a';
  float c  = 123.45;
  double d = 1.23e+45;

  printf("a = %i\n", a);
  printf("b = %c\n", b);
  printf("c = %f\n", c);
  printf("d = %g\n", d);

  /* Display character as integer. */
  printf("\na = %d\n", a);

  /* Display double in scienific. */
  printf("d = %e\n", d);

  /* Display double in float or scientific. */
  /* Let's computer decide. */
  printf("d = %g\n", d);

  /* Integer as base 16. */
  printf("a = %x\n", a);

  return 0;
}
