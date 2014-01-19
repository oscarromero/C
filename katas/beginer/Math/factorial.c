#include <stdio.h>

int main () {
  int n = 1;
  for (int i = 1; i <= 10; i++) {
    n += (i - 1) * n;
    printf("%i\t%i\n", i, n);
  }
}
