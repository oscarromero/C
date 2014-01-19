#include <stdio.h>
#include <stdlib.h>

int main () {
  int min;
  int max;
  
  int max_tries;
  int cur_tries;

  int secret;
  int guess;

  printf("Guess the numbers from ");
  scanf("%i", &min);

  printf("Guess the numbers to ");
  scanf("%i", &max);

  printf("Max tries ");
  scanf("%i", &max_tries);

  secret = (int)rand() / 330;

  printf("Secret is %i\n", secret);

  if (secret < 0) {
    secret = 0;
  }

  if (secret > 100) {
    secret = 100;
  }
  
  guess = secret - 1;

  while ( (secret != guess) && (cur_tries < max_tries)) {
    cur_tries++;
    printf("Enter a guess between %i and %i\n", min, max);
    scanf("%i", &guess);

    if (guess < secret) {
      printf("Too loow...\n");
      if (guess > min) {
        min = guess;
      }        
    }

    if (guess > secret) {
      printf("Too high...\n");
      if (guess < max) {
        max = guess;
      }
    }
  }

  return 0;
}
