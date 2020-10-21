#include<stdio.h>

int main()
{
	char btype;

	printf("My blood type is 'A'\n"); 
	printf("Type your blood type (please type T for AB): \n");
	scanf("%c", &btype);
	printf("%c\n", btype);

	return 0;

}
