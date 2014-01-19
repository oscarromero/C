#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TABLA_DADOS_SIZE 15

int main (int argc, char** argv) {

  int dado[TABLA_DADOS_SIZE];

  srand(clock());

  for (int i = 0; i < TABLA_DADOS_SIZE; i++) {
    dado[i] = rand() % 6 + 1;
  }

  int total = 0;
  
  for (int i = 0; i < TABLA_DADOS_SIZE; i++) {
    total += dado[i];
  }

  printf("Total %d\n", total);
}