/*
 *
 * Author.: Oscar Romero
 * Date...: 2013-12-22
 * About..: Guess a number.
 *
 */
#include <stdio.h>

#define EQUALS ==

int main (int argc, char** argv) {
  int guess = -1;
  int secret = 7;
  int count_of_guesses = 0;

  printf("Try to pick a number between 1 and 10\n");

  /* Possible infinite loop if user is real idiot. */
  while ( guess != secret ) {
    count_of_guesses++;

    printf("Enter a guess: \n");
    scanf("%i", &guess);
  }
  printf("You got it after %i tries\n", count_of_guesses);

  return 0;
}
