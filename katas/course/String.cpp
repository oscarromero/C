#include <stdio.h>

int main ()
{
   char s[] = "String";

   printf("your string was: %s\n", s );
   
   for (char * cp=s; *cp; ++cp)
   {printf("char is %c\n", *cp);
		}

   return 0;


}
