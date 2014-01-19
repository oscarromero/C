/*
 *
 * Author.: Oscar Romero
 * Date...: 2013-12-22
 * About..: Nested loops using DO-WHILE.
 *
 */
#include <stdio.h>

int main (int argc, char** argv) {
  int m = 0;
  int x = 5;

  while ( x < 10 ) {
    m = x * 10;

    do {
      printf("%i %i\n", x, m);

      m = m + ( m / 2 );
    } while ( m < 200 );

    x = x + 2;
  }

  return 0;
}
