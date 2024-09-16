/*17.Calculate 5 numbers from user and calculate number of even and odd using
of while loop*/
#include<stdio.h>
int main()
{
    int i=1,num,countodd=0,counteven=0;
    while(i<=5)
    {
        printf("enter the number = ");
        scanf("%d",&num);
        i++;

        if(num%2==0)
        {
            counteven++;
        }
        else
        {
            countodd++;
        }
    }
    printf("\n total even number = %d",counteven);

   printf("\n total odd number = %d",countodd);
    return 0;
}