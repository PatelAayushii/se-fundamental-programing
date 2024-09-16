/*14.Accept 5 numbers from user and find those numbers factorials*/

#include<stdio.h>
int main()
{
    int num,i=1,fact=1;
    for(i=1;i<=5;i++)
    {
        printf("\n enter the number ");
        scanf("%d",&num);

             fact = fact*num;
       
        printf("\n factorial of  %d is %d ",num,fact);
    }

    return 0;
}