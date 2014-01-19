#include <stdio.h>

int main () {
  int from;

  printf("Put a number for start a recursive count: ");
  scanf("%i", &from);

  for (int i = from; i>= 0; i--) {
    printf("%i\n", i);
  }
}
