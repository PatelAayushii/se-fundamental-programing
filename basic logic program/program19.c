//19.Calculate compound interest
//A=p(1+r/n)^/nt
#include<stdio.h>
#include<math.h>
int main()
{
    float A,p,r,n,B,t,ans;
   
    printf("\n enter the principal amount: ");
    scanf("%f",&p);

    printf("\n enter the annual interest(in desimal form): ");

    scanf("%f",&r);

    printf("\n entr the number of year: ");
    scanf("%f",&t);

    printf("\n entr the number of times interest is compounded per year: ");
    scanf("%f",&n);
    
    A=p*(1+(r/n));
    ans=pow(A,n*t);
    B=n*t;
    ans=pow(A,B);

    
    printf("\n compound interest:%2f",ans);


    return 0;
}