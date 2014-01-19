/*
 *
 * Author.: Oscar Romero
 * Date...: 2013-12-22
 * About..: Testing relational operators (Heavy bugs).
 *
 */
#include <stdio.h>

int main (int argc, char** argv) {
  int x, y, z;

  y = 2;

  /* y == 3 is a relational expresion */
  /* its truth or falsity is assigned to x. */
  x = y == 3; /* Assign to x the result of the comparison. */
  printf("AAA x = %i y = %i\n", x, y);

  y = 3;

  x = y == 3; /* Assign to x the result of the comparison. */
  printf("BBB x = %i y = %i\n", x, y);

  x = y; /* no side effect, return value not used, this does nothing. */
  printf("CCC x = %i y = %i\n", x, y);

  z = x < y;
  printf("DDD z = %i x = %i y = %i\n", z, x, y);

  return 0;
}