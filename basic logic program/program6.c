//6. Find area of Triangle Formula : A = 1/2 × b × h
#include<stdio.h>
int main()
{
    int b,h,area;
   
    printf("\n enter the value of b ");
    scanf("%d",&b);
    printf("\n enter the value of h ");
    scanf("%d",&h);
    area = b*1/2*h;
    printf("\n area of triangle :%d",area);
    return 0;
}