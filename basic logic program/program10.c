//10.find the area of a rectangular prism formula : A=2(wl+hl+hw)
#include<stdio.h>
int main()
{
    int area,w,h,l;
    printf("\n enter the value of w ");
    scanf("%d",&w);
    printf("\n enter the value of h ");
    scanf("%d",&h);
    printf("\n enter the value of l ");
    scanf("%d",&l);
    area =(w*l+h*l+h*w)*2;
    printf("area of rectangular prism:%d",area);

    return 0;
}