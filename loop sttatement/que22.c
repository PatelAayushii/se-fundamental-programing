/*22. Accept 3 numbers from user using while loop and check each numbers
palindrome*/

#include<stdio.h>
int main()
{
    int num,rem,rev,copy,i=1;
    while(i<=3)
    {
    printf("\n enter the number = ");
    scanf("%d",&num);
     copy=num;
     rev=0;
    while(num!=0)
    {
        rem=num%10;
        rev=(rev*10) + rem;
        num = num/10;

    }
    if(rev==copy)
    {
        printf("\n %d is palindrom number  ",copy);
    }
    else
    {
        printf("\n %d is not pallindrom number  ",copy);
    }
    
    }
    return 0;
}
