#include <stdio.h>

long factorial (int n);

int main (int argc, char** argv) {
    printf("%ld \n", factorial(5));

    return 0;
}

long factorial (int n) {
    if (n == 0) {
      return 1;
    } else {
      return n * factorial (n - 1);
    }
}
