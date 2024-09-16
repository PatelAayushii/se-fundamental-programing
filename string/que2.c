//2 : Write a program in C to separate individual characters from a string.
#include<stdio.h>
int main()
{
	char str[100];
	int i=0;
	printf("Enter any string:");
	gets(str);
	while(str[i]!='\0')
	{
		printf("\n Individual characters from a string = %c",str[i]);
		i++;
	}
	
	return 0;
}
