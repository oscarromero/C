#include <stdio.h>
#include <stdlib.h>

int main (int argc, char** argv)
{
  char input; // store the user input.
  int number; // The converted number after input.

  int integer_list[sizeof(int)] = {};
  int size_of_integer_list;

  int last_max_input;
  int last_min_input;

  int i; // for loops.

  /* Catch the numbers. */
  printf("Set a list of number's between 0 and 9 and press \"s\" to start:\n");

  while (input != 's')
  {
    scanf("%c", &input);

    number = (integer_list[size_of_integer_list] = atoi(&input));

    if (number)
    {
      if (number > last_max_input)
      {
        last_max_input = number;
      }

      if (number < last_min_input)
      {
        last_min_input = number;
      }

      size_of_integer_list++;
    }
  }

  integer_list[size_of_integer_list - 1] = last_max_input;
  integer_list[0] = last_min_input;

  /* Show the saved numbers. */
  printf("Your min input was %i.\n", last_min_input);
  printf("Your max input was %i.\n", last_max_input);
  printf("Your %i numbers are:\n", size_of_integer_list);

  for (i = 0; i < size_of_integer_list; i++)
  {
    printf("%i\n", integer_list[i]);
  }

  return (0);
}
