//7. Accept marks from user and check pass or fail
#include<stdio.h>
int main()
{
    float marks,pass,fail;
    printf("\n enter the marks = ");
    scanf("%d",&marks);
    if(marks<=30.00)
    {
        printf("\n fail .%2f",fail);
    }
    else
    {
        printf("\n pass .%2f",pass);
    }
    return 0;
}