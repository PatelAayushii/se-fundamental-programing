//26. (1)+ (1+2) + (1+2+3) + (1+2+3+4) + ... + (1+2+3+4+...+n)4

#include<stdio.h>
int main()
{
    int i,num,sum=0,j,k=0;
    printf("\n enter the number = ");
    scanf("%d",&num);
    
    for ( i = 1; i <=num; i++)
    {
        sum=0;
       for(j=1;j<=i;j++)
       {
            sum=sum+j;
       }
       k=sum+k;
    }
    printf("\n  (1)+ (1+2) + (1+2+3) + (1+2+3+4) + ... + (1+2+3+4+...+%d) is %d",num,k);
    
    return 0;
}