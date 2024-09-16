/*11.WAP to accept 5 numbers from user and display in reverse order using for
loop and array
*/

#include<stdio.h>
int main()
{
     int rev[5],i;
    for ( i = 0; i < 5; i++)
    {
        printf("\n enter the value  [%d] = ",i);
        scanf("%d",&rev[i]);
    }

    for ( i = 4; i >=0; i--)
    {
       printf("\n value in reverse[%d] = %d",i,rev[i]);
    }
     return 0;
}