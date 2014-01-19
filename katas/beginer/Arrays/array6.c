#include <stdio.h>
#include "arrays.h"

int main (int argc, char** argv) 
{
  int i;
  int *number_list = (int[10]) {1, 3, 5, -2, -6, 7, 4, 9, 12, 932};

  printf("Your array:\n");
  for (i = 0; i < 10; i++)
  {
    printf("%i\t%i\n", i, number_list[i]);
  }

  array_sort_keys(&number_list);

  printf("Your sorted array:\n");
  for (i = 0; i < 10; i++)
  {
    printf("%i\t%i\n", i, number_list[i]);    
  }

  return (0);
}
