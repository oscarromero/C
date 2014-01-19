#include <stdio.h>

int main (int argc, char** argv) {
  int table, limit, result;

  printf("Welcome to factorials, which table do you need? ");
  scanf("%i", &table);

  printf("What is the limit? ");
  scanf("%i", &limit);

  for ( int i = 0; i < limit; i++ ) {
    result = table * i;

    printf("%i * %i = %i\n", table, i, result);
  }
}
