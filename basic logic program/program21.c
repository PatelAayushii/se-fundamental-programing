//21.Accept 2 numbers from user and swap 2 numbers with using 3rd variableand without using 3rd variable
#include<stdio.h>
int main()
{
    int a,b,c;
    printf("\n value of a before swapping =");
    scanf("%d",&a);
    printf("\n value of b before swapping = ");
     scanf("%d",&b);
    c=a;
    a=b;
    b=c;
     printf("\n value of b after swapping =%d", a);
      
    printf("\n value of a after swapping = %d",b);

    {
	int a ,b;
	printf("\nValue of a before swapping =");
     scanf("%d",&a);
	printf("\nValue of b before swapping = ");
     scanf("%d",&b);

	a = a + b;
	b = a - b;
	a = a - b;
	printf("\nValue of a after swapping = %d",a);
	printf("\nValue of b after swapping = %d",b);
	
}
     

    return 0;
}