#include <stdio.h>

int main (void) {
  int x = 1;

  printf("%i\n", x);

  int * px = &x;

  printf("%i\n", *px);

  int y = *px + 2;

  printf("%i\n", y);

  x = 2; // Change the value of X and PX.

  printf("%i\n", *px);
  printf("%i\n", y);

  *px = 4; // Change the value of PX and X.

  printf("%i\n", x);
  printf("%i\n", *px);
  printf("%i\n", y);

  return 0;
}