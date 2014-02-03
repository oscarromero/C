#include <stdio.h>
 int sum(int x, int y);
int x = 20;
 
int main ()
{
  /*int x = 10;*/
  int y = 20;
  int z = 0;

  printf ("value of x in main() = %d\n",  x);
  z = sum( x, y);
  printf ("value of z in main() = %d\n",  z);

  return 0;
}

int sum(int x, int y)
{
    printf ("value of x in sum() = %d\n",  x);
    printf ("value of y in sum() = %d\n",  y);

    return x + y;
}
