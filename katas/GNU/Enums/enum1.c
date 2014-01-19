// An enumeration is a custom data type used for storing constant integer values and \ 
// referring to them by names.

// We can't use the same name for a enum as a struct or union in the same scope.

// The values fo a enum can't be modified.

// The content inner a struct is unique.

#include <stdio.h>

int main (int argc, char** argv) {

  int selected_fruit;

  /* Start from 0 */
  enum fruits {
    grapes, 
    pear, 
    berry, 
    kiwi
  };

  /* Start from -17 */
  enum more_fruit {
    banana = -17, 
    apple, 
    blueberry, 
    mango
  };

  /* Start from 0, plum = (2 + 2 = 4). */
  enum yet_more_fruit {
    kumquat, 
    raspberry, 
    peach, 
    plum = peach + 2
  };

  enum fruits fruit_list;

  printf("Choose one of this fruits:\n 0 = Grapes\n 1 = Pear\n 2 = Berry\n 3 = Kiwi\n");
  scanf("%i", &selected_fruit);

  switch (selected_fruit) {
    case grapes:
      printf("You picked grapes!\n");
      break;

    case pear:
      printf("You picked pears!\n");
      break;

    case berry:
      printf("You picked berrys!\n");
      break;

    case kiwi:
      printf("You picked kiwis!\n");
      break;

    default:
      break;
  }

  return (0);
}
