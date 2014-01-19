/*
 *
 * Author.: Oscar Romero
 * Date...: 2013-12-22
 * About..: Nested loops.
 *
 */
#include <stdio.h>

int main (int argc, char** argv) {
  for (int i = 0; i < 5; i++) {
    for (int j = 5; j > 3; j--) {
      printf("%i %i\n", i, j);
    }
  }

  return 0;
}
