/*
A
A B
A B C
A B C D 
A B C D E */

#include<stdio.h>
int main()
{
    int row,i,j,k;
    char ch = 'A';
    printf("\n enter the row number = ");
    scanf("%d",&row);
    for(i=1;i<=row;i++)
    {
        ch='A';
        for(j=1;j<=i;j++)
        {
            printf("%c\t",ch);
            ch++;
        }
        printf("\n");
    }
    return 0;
}