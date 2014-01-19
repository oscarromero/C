#include <stdio.h>

int mcd (int a, int b) {
  
  while ( a * b != 0) {
    if (a > b) {
      a %= b;
    } else {
      b %= a;
    }
  }

  return a + b;
}

int main (void) {

  int c = mcd(5, 10);

  printf("%i\n", c);

  return 0;
}