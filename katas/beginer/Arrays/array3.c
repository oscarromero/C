/*
 *
 * Calculate the average of a set of bowling scores
 * only count scores over 100 for person's average and 
 * print out the high and low scores, all scores and 
 * scores used in average
 *
 */

#include <stdio.h>
#include <stdlib.h>

#define MAX_SCORES       100
#define MAX_SCORE        300
#define MIN_SCORE          0
#define MIN_LEAGUE_SCORE 100

int main (int argc, char** argv) {
  /* For some loops. */
  int i;

  /* scores will be the array of scores entered. */
  int scores[MAX_SCORES];

  /* num_scores is the count of how many scores they want to enter. */
  int num_scores;
  int score;

  /* scores_to_count are used to keep track of how many valid scores there were. */
  int raw_scores_to_count = 0;
  int league_scores_to_count = 0;
  int score_total = 0;

  /* The average are floats because I want floating point accuracy. */
  float raw_average;
  float league_average;

  /* Initialize current high and low. */
  int high = 0;
  int low = MAX_SCORE; 

  /* Find out how many scores the person will be entering. */
  printf("How many scores will you be entering?");
  scanf("%i", &num_scores);

  printf("\nYou entered %d scores\n", num_scores);

  if (num_scores > MAX_SCORES) {
    printf("Cannot take that many, %i is max\n", MAX_SCORES);
    exit(-1);
  }

  /* for each of the scores requested, get the score. */
  for (i = 1; i <= num_scores; i++) {
    printf("\nEnter score #%i: ", i);
    scanf("%i", &score);
    printf("You ented %i\n", score);

    /* if scores wass less than 100. */
    if ( (score < MIN_SCORE) || (score > MAX_SCORE) ) {
      printf("Impossible score\n");
    } else {
      /* Insert score into array. */
      scores[raw_scores_to_count] = score;

      /* Update the total of all scores. */
      score_total = score_total + score;
      raw_scores_to_count++;

      if (score > high) {
        high = score;
      }

      if (score < low) {
        low = score;
      }
    }
  } // End for.

  if (raw_scores_to_count > 0) {
    raw_average = score_total / raw_scores_to_count;

    printf("\nRaw average = %.2f\n", raw_average);
    printf("High score was %i\n", high);
    printf("Low score was %i\n", low);
  } else {
    printf("No valid scores entered\n");
  }

  score_total = 0;
  league_scores_to_count = 0;

  printf("\n\nLIST OF LEAGUE SCORES USED IN AVERAGE\n");

  for (i = 0; i < raw_scores_to_count; i++) {
    if (scores[i] > MIN_LEAGUE_SCORE) {
      printf("\t%i\n", scores[i]);

      league_scores_to_count++;
      score_total += scores[i];
    }

    if (league_scores_to_count > 0) {
      league_average = score_total / league_scores_to_count;
      printf("\nLeague average = %.2f\n", league_average);
    } else {
      league_average = 100;
    }
  }

  return (0);
}
