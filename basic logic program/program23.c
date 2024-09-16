//23.WAP to calculate swap 2 numbers with using of multiplication and division.

#include<stdio.h>
int main()
{
    int a=10,b=20;
    printf("\n value of before swaping = %d",a);
    printf("\n value of before swaping = %d",b);
    a=a*b;
    b=a/b;
    a=a/b;
    printf("\n value of after swaping = %d",a);
    printf("\n value of after swaping = %d",b);
    return 0;
}