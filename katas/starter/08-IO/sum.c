/*
 * 
 * Suma dos números.
 *
 */

#include <stdio.h>

int main (int argc, char** argv) {
  int n1, n2, nt;

  printf("\nIntroduzca el primer número: ");
  scanf("%d", &n1);

  printf("\nIntroduzca el segundo número ");
  scanf("%d", &n2);

  nt = n1 + n2;

  printf("\n\aLa suma de %d + %d es %d\n", n1, n2, nt);

  return 0;
}
