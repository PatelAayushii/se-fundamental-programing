//25. (1*1) + (2*2) + (3*3) + (4*4) + (5*5) + ... + (n*n)
#include<stdio.h>
int main()
{
    int num,sum=0,i;
    printf("\n enter a number = ");
    scanf("%d",&num);
    for(i=1;i<=num;i++)
    {
        sum = sum + i * i;
    }
    printf("\n sum of series (1*1)+(2*2) + (3*3) +(4*4) + (5*5) +......  = %d",sum,num);
    return 0;
}