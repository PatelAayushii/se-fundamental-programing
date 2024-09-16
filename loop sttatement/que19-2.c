/*
A
B C
D E F 
G H I J 
K L M N O  */

#include<stdio.h>
int main()
{
    int row,i,j;
    char ch = 'A';
    printf("\n enter therow number = ");
    scanf("%d",&row);
    for(i=1;i<=row;i++)
    {

        for(j=1;j<=i;j++)
        {
            printf("%c\t",ch);
            ch++;
        }
        printf("\n");
    }
    return 0;
}