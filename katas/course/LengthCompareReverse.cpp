#include<stdio.h>
#include<string.h>
 
/*main()
{
   char a[200];
   int l;
 
   printf("Enter a string to evaluate\n");
   gets(a);
 
   l = strlen(a);
 
   printf("Length of entered string is = %d\n",l);
 
   return 0;
} */
/*compare a string*/

/*main()
{
   char a[100], b[100];
 
   printf("first string please\n");
   gets(a);
 
   printf("second string please\n");
   gets(b);
 
   if( strcmp(a,b) == 0 )
      printf("we got a match.\n");
   else
      printf("This is not a day for you.\n");
 
   return 0;
} */

/*reverse a string*/

main()
{
   char a[100];
 
   printf("Enter a string to reverse\n");
   gets(a);
 
   strrev(a);
 
   printf("Reverse of entered string is \n%s\n",a);
 
   return 0;
}

