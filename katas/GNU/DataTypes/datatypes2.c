#include <stdio.h>

int main (int argc, char** argv) {
  /* PRIMITIVES DATA TYPES */

  /* INTEGERS */
  signed char a; // 8 bit -> Hold integer values in a range from -128 to 127.
  unsigned char b; // 8 bit -> Hold integer values from 0 to 255;
  char c; // 8 bit -> Have the same range of signed and unsigned, depend's of your system.

  short int d; // 16 bit -> Hold values from -32,768 to 32,767;
  signed short e; // Without simbol.
  signed short int f; // With simbol.
  unsigned short int g; // 16 bit -> hold values from 0 to 65,535.
  unsigned short h;

  int i; // 32 bit -> Hold values from -2,147,483,648 to 2,147,483,647.
  signed int j;
  signed k;
  unsigned int l; // 32 bit -> hold values from 0 to 4,294,967,295.
  unsigned m;
  long int n; // 32 bit -> hold values from -2,147,483,648 to 2,147,483,647. Depend of the system, may be 64bit.
  long o;
  signed long int p;
  signed long q;
  unsigned long int r; // 32 bit -> hold values from 0 to 4,294,967,295. Depend of the system, may be 64bit.

  /* This type is not part of C89, but is both part of C99, C11 and GNU extensions. */
  long long int s; // 64bit -> hold values from −9,223,372,036,854,775,808 to 9,223,372,036,854,775,807.
  long long t;
  signed long long int u;
  signed long long v;

  unsigned long long int w; // 64 bit -> hold values from 0 to 18,446,744,073,709,551,615.
  unsigned long long x;

  /* REAL NUMBERS */
  /* All floating points are signed. */
  float f1;
  double d1;
  long double d2;

  return (0);
}
