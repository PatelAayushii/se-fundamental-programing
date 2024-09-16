//16.Calculate the Sum of Natural Numbers Using the While Loop
#include<stdio.h>
int main()
{
    int i=0,num,sum=0;
    printf("\n enter the number = ");
   scanf("%d",&num);

    while(i<=num)
    {
        sum=sum+i;
        i++;
    }
    printf("\n the total value of natrual number is %d ",sum);
    return 0;
}
