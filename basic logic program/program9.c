//9. Find circumference of Triangle formula : triangle = a + b + c
#include<stdio.h>
int main()
{
    float circumference,a,b,c;
    printf("\n enter the value of a");
    scanf("%f",&a);
    printf("\n enter the value of b ");
    scanf("%f",&b);
    printf("\n enter the value of c ");
    scanf("%f",&c);
    circumference = a+b+c;
    printf("\n circumference of triangle :%f ",circumference); 
    return 0;

}