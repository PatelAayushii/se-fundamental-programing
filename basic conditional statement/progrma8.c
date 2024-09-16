//8. WAP to accept the height of a person in centimeters and categorize the person according to their height.
#include<stdio.h>
int main()
{
    int height;
    printf("\n enter the height = ");
    scanf("%d",&height);
    if(height<=150)
    {
        printf("\n you are short:%d",height);
    }
    else if ((height<=165)  &&  (height<195))
    {
        printf("\n you are average",height);
    }
    else
    {
        printf("\n you are tall",height);
    }
     return 0;
}
