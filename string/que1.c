/*1. Write a program in C to find the length of a string without using library
functions.*/
#include<stdio.h>
int length(char str[]);
int main()
{
	int result;
	char str[100];
	printf("\n----> hello friends welcome in string <------ ");
	printf("\nEnter string to find its length:\n");
	gets(str);
	result= length(str);
	printf("The length of string = %d", result);
	return 0;
}
int length(char str[])
{
	int len,i;
	for(i=0; str[i]!='\0'; i++)
	{
		len++;
	}
	return len;
}
