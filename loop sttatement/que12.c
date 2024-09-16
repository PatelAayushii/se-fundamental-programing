//12.Program of Armstrong Number in C Using For Loop & While Loop
#include<stdio.h>
#include<math.h>
int main()
{
    int num,digit=0,i,rem,sum=0,power;
    printf("\n enter the number = ");
    scanf("%d",&num);
    int copy= num;
    int temp=num;
    while (num!=0)
    {
        num= num/10;
        digit++;
    }

for (i=0;i<digit;i++)
{
   rem = copy % 10;
   power = pow(rem,digit);
   sum = sum + power;
   copy = copy / 10;
}
 if(sum == temp)
 {
    printf("\n%d number is armstrong number ",temp);
 }
 else
 {
    printf("\n%d not a aramstrong number ",temp);
 }
    return 0;
}