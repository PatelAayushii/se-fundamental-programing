/*17. Write a C program to check whether a triangle can be formed with the given
values for the angles.*/

#include<stdio.h>
int main()
{
    float angle1,angle2,angle3;
    printf("\n enter the angle 1 =");
    scanf("%d",&angle1);
    printf("\n enter the angle 2 =");
    scanf("%d",&angle2);
    printf("\n enter the angle 3 = ");
    scanf("%d",&angle3);
    if(angle1+angle2+angle3==180)
    {
        printf("\n a triangle can be formbed with these angle");
    }
    else
    {
        printf("\n a triangle can not be formbed with these angle");
    }
    return 0;
}