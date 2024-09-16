//6. WAP to print Fibonacci series up to given numbers5
#include<stdio.h>
int main()
{
    int num1=0,num2=1,num3,value,i;
    printf("\n enter the value = ");
    scanf("%d",&value);
    printf("\n fibonachi seris %d\t%d\t",num1,num2);
    for(i=1;i<=value;i++)
    {
        num3=num1+num2;
        printf(" %d\t ",num3);
        num1=num2;
        num2=num3;
    }
    return 0;
}