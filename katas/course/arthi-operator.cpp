#include <stdio.h>

main()
{
   int a = 5;
   int b = 4;
   int c ;

   c = a + b;
   printf("addition value of c is %d\n", c );
   c = a - b;
   printf("subtraction value of c is %d\n", c );
   c = a * b;
   printf("multiplication value of c is %d\n", c );
   c = a / b;
   printf("division value of c is %d\n", c );
   c = a % b;
   printf("Modulus value of c is %d\n", c );
   c = a++; 
   printf("Increment value of c is %d\n", c );
   c = a--; 
   printf("decrement value of c is %d\n", c );
	
   return 0;
}
