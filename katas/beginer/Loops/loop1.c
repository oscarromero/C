/*
 *
 * Author.: Oscar Romero
 * Date...: 2013-12-22
 * About..: Show the different loops.
 *
 */
#include <stdio.h>

int main (int argc, char** argv) {
  int sum;
  int n;

  /* Sum and loop counter need to be initialized. */
  sum = 0;
  n = -5;

  while (n <= 5) {
    sum = sum + n;
    n = n + 1;
    printf("n is %i sum is %i \n", n, sum);
  }
  printf("While loop: sum is %i\n\n\n", sum);

  /* Do loop, check condition at bottom. */
  sum = 0;
  n = -5;
  do {
    sum = sum + n;
    n = n +1;
    printf("n is %i sum is %i\n", n, sum);
  } while ( n <= 5);
  printf("Do loop: sum is %i\n\n\n", sum);

  /* for loop, C shorthand to get all loop things on one line. */
  for (sum = 0, n = -5; n <= 5; n++) {
    sum = sum + n;
  }
  printf("For loop: sum is %i\n\n\n", sum);

  return 0;
}
