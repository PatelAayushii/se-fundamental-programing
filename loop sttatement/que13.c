/*13.calculate the Factorial of a Given Number using while loop*/

#include<stdio.h>
int main()
{
    int num,fact=1,i=1;
    printf("\n enter the number = ");
    scanf("%d",&num);
    while(i<=num)
    {
        fact=fact*i; 
        i++;  
    }
    printf("\n factorial %d is %d",num,fact);
    return 0;
}