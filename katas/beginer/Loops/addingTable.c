/*
 *
 * Author.: Oscar Romero
 * Date...: 2013-12-22
 * About..: Adding table.
 *
 */
#include <stdio.h>

int main (int argc, char** argv) {
  int i, j, x, y;
  int result;

  scanf("%i", &x);
  scanf("%i", &y);

  /* Print the header. */
  printf("%c", '+');
  for ( i = 0; i <= x; i++ ) {
    printf("\t%i", i);
  }
  printf("\n");

  /* Print the rows. */
  for ( i = 0; i <= x; i++ ) {
    printf("%i\t", i);
    for ( j = 0; j <= y; j++ ) {
      printf("%i\t", i + j);
    }
    printf("\n");
  }

  return 0;
}
