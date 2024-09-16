//26.Convert temperature Fahrenheit to Celsius
#include<stdio.h>
int main()
{
    float fahrenheit,celsius;
    printf("\n enter the fahrenheit = ");
    scanf("%f",&fahrenheit);
    celsius=(fahrenheit-32)*5/9;
    printf("\n enter the fahrenhit to celsius %f ",celsius);
    return 0;
}