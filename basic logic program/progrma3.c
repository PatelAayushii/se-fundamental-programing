//3. WAP to Find Area And Circumference of Circle
#include <stdio.h>

int main()
 {
    float radius, area, circumference;
    printf("Enter the Radius: ");
    scanf("%f", &radius);
    area = radius *3.14* radius;
    circumference =  radius *2 *3.14 ;
    printf("\nArea of the circle: %.1f ", area);
    printf("\nCircumference of the circle: %.1f ", circumference);
    return 0;
}