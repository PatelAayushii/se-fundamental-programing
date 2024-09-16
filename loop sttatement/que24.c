/*Series Program:
24. 1 + 2 + 3 + 4 + 5 + ... + n*/

#include <stdio.h>

int main() {
    int num,sum=0,i;
    printf("\n enter the number = ");
    scanf("%d",&num);
    for ( i = 1; i <=num; i++)
    {
       sum=sum+i;
    }
    printf("\n sum of series is 1+2+3+4....+ %d = %d",num,sum);
    

    return 0;
}