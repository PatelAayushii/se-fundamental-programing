
//5. WAP to print factorial of given number

#include<stdio.h>
int main()
{
    int num,fact=1,i;
    printf("\n enter the number = ");
    scanf("%d",&num);
    for(i=1;i<=num;i++)
    {
        fact=fact*i;
    }
    printf("\n factorial %d is %d",num,fact);
    return 0;
}
