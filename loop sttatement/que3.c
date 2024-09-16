/*3. WAP to take 10 no. Input from user find out below values 
a. How many Even numbers are there
b. How many odd numbers are there
c. Sum of even numbers
d. Sum of odd numbers
*/

#include<stdio.h>
int main()
{
    int i,oddcount=0,oddsum=0,evencount=0,evensum=0,num;
    for(i=1;i<=10;i++)
    {
        printf("\n enter the  number  %d = ",i);
        scanf("%d",&num);
        if(num%2==0)
        {
            evencount++;
            evensum=evensum+num;
        }
        else
        {
            oddcount++;
            oddsum=oddsum+num;
        }

    }
    printf("\n even number = %d",evencount);
    printf("\n odd number = %d",oddcount);
    printf("\n sum of even number = %d  ",evensum);
    printf("\n sum of odd number  = %d  ",oddsum);

    return 0;
}
