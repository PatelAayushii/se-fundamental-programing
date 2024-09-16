/*5. WAP to take two Array input from user and sort them in ascending or
descending order as per users choice*/

#include<stdio.h>
int main()
{
	int num[100],size,i,j,choise;
	printf("\nEnter the size of an array = ");
	scanf("%d",&size);
	
	
	for(i=0;i<size;i++)
	{
		printf("\nEnter the element in num[%d] = ",i);
		scanf("%d",&num[i]);
	}

	printf("\nArray = ");
	for(i=0;i<size;i++)
	{
		printf("%d ",num[i]);
	}
	printf("\n ");
	 
	printf("\n 1. Ascending order ");
	printf("\n 2. Desanding order");
	printf("\n enter your choise = ");
	scanf("%d",&choise);

	if (choise == 1) 
	{	
		
	for(i=0;i<size;i++)
	{
		for(j=i+1;j<size;j++)
		{
			if(num[i]>num[j])
			{
				int temp = num[i];
				num[i] = num[j];
				num[j] = temp;
			}
		}
	}
	printf("\nAscending order array = "); 
	for(i=0;i < size;i++)
	{
		printf("%d ",num[i]);
		
	}
	}
	else if (choise == 2)
	{
	//printf("\n Desanding order array = ");
	for ( i = 0; i < size -1; i++)
	{
		for(j = i + 1;j < size ;j++)
		{
			if(num[i] < num[j]) 
			{
				int temp = num[i];
				num[i] = num[j];
				num[j] = temp; 
			}
		}
	}
	printf("\n Array in Desanding order = ");
	for ( i = 0; i < size; i++)
	{
		printf(" %d ",num[i]);
	}
	}
	
	return 0;
}