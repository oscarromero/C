/*
 *
 * Author.: Oscar Romero
 * Date...: 2013-12-22
 * About..: Demostrates basic math, precedence and difference between integer division.
 *          how value is stored is determinated by destination data type.
 *          and floating division.
 *
 */
#include <stdio.h>

int main (int argc, char** argv) {
  /* Declare and initialize. */
  int a = 7;
  int b = 2;
  int int_answer;

  float c = 7.0;
  float d = 2.0;
  float float_answer;

  /* Print initial values. */
  printf("a => %i\t b => %i\t c => %f\t d => %f\n\n", a, b, c, d);

  /* Divide integer with integer. */
  printf("Integer divided by integer \n");
  int_answer = a / b;
  printf("%i / %i = %i \n\n", a, b, int_answer);

  /* Divide float with float. */
  printf("Float divided by float \n");
  float_answer = c / d;
  printf("%f / %f = %f \n\n", c, d, float_answer);

  /* Divide float with integer. */
  printf("Float divided by integer \n");
  int_answer = c / b;
  float_answer = c / b;
  printf("Stored in integer %f / %i = %i \n\n", c, b, int_answer);
  printf("Stored in float %f / %i = %f \n\n", c, b, float_answer);

  /* Divide integer with float. */
  printf("Integer divided by a float \n");
  int_answer = a / d;
  float_answer = a / d;
  printf("Stored in integer %i / %f = %i \n\n", a, d, int_answer);
  printf("Stored in float %i / %f = %f \n\n", a, d, float_answer);

  printf("-a = %i\n", -a);
  printf("-c = %f\n", -c);

  return 0;
}
