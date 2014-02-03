#include<stdio.h>

int main()
{
	char grade = 'H';
	
	switch(grade)
	{
		case 'A':
			printf("wow grade\n");
			break;
		case 'B':
			printf("ok grade\n");
			break;
		case 'C':
			printf("not ok grade\n");
			break;
		default :
			printf("Invalid grade mentioned\n");
			
		}
	printf("this is your grade %c", grade);
	return 0;
}
