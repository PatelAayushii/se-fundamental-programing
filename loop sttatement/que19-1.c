/*Patterns5

1
1 0
1 0 1
1 0 1 0
1 0 1 0 1
*/

#include<stdio.h>
int main()
{
    int row,i,j;
    printf("\n enter the row number = ");
    scanf("%d",&row);
    for(i=1;i<=row;i++)
    {
        for(j=1;j<=i;j++)
        {
            if(j%2==0)
            {
                printf("0 ");
            }
            else
            {
                printf("1 ");
            }
        }
          printf("\n");
    }

    return 0;
}