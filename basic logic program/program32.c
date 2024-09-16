//32.Accept 2 numbers and find out its sum check it size


#include<stdio.h>
int main()
{
    int num1,num2,sum;
    printf("\n enter the num1 = ");
    scanf("%d",&num1);
    printf("\n enter the num2 = ");
    scanf("%d",&num2);
    printf("\n sum of two number = %d",num1,num2,num1+num2);
    printf("\n check it size %d",sizeof(num1+num2));
    return 0;
}