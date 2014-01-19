/*
 *
 * Author.: Oscar Romero
 * Date...: 2013-12-22
 * About..: Show the sizeof for each data type.
 *
 */
#include <stdio.h>

int main (int argc, char** argv) {
  char c1;
  int i1;
  short s1;
  unsigned u1;
  long int l1;

  printf("Size of character is %g\n", (double)sizeof(c1));
  printf("Size of short int is %g\n", (double)sizeof(s1));
  printf("Size of unsigned int is %g\n", (double)sizeof(u1));
  printf("Size of int is %g\n", (double)sizeof(i1));
  printf("Size of long int is %g\n", (double)sizeof(l1));
  
  return 0;
}
