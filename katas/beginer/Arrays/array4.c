#include <stdio.h>

int i;
int j;
char word1[] = {"abcdefghij"};

int main (int argc, char** argv) {
  char word2[] = {"1234567890123456789"};

  /* Null terminator is not added to word3. */
  /* Size of word2 would be determinated at initialization time. */
  char word3[] = {'H', 'e', 'l', 'l', 'O', '!'};
  char word4[] = {"ABCDEFGHIJKLMNOP"};

  /* Null terminator is added to "s" size of. */
  char *s = {"still yet another way, pointer characted!"};

  for (i = 0; i < 20; i++) {
    printf("%c %x\n", word1[i], word1[i]);
  }
  printf("\n");

  for (i = 0; i < sizeof(word1); i++) {
    printf("%c", word1[i]);
  }
  printf("\n");

  /* This is much better. */
  printf("%s\n", word1);

}
