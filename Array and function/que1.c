//1.Write a program to find out the max number from given array using function

#include<stdio.h>
int max();
int main()
{
	int result;
	result=max();
    printf("\n max number is : %d",result);
	return 0;
}
int max()
{
	int a[100],size,i,max=0;
	printf("\n Enter The Size:");
	scanf("%d",&size);
	for(i=0;i<size;i++)
	{
		printf("\n Enter The Element Of a[%d]:",i);
		scanf("%d",&a[i]);
	}
	for(i=0;i<size;i++)
	{
		if(a[i]>max)
		{
			max=a[i];
		}
	}
	return max;
}