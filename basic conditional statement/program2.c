/* 2. Write a C program to read the value of an integer m and display the value of m is 1 when
 m is larger than 0, 0 when m is 0 and -1 when m is less than 0 */ 
#include<stdio.h>
int main()
{
    int num;
    printf("\n enter the num = ");
    scanf("%d",&num);
    if(num<0)
    {
        printf("\n value is nagative %d",-1);
    }
    else if(num==0)
    {
        printf("\n value is  %d",0);
    }
    else
    {
       printf("\n value is positive %d",1);
    }
    return 0;
}


















































































































