//18. Write a C program to calculate profit and loss on a transaction.
#include<stdio.h>
int main()
{
   float profit,sellingprice,costprice,loss;
    printf("\n enter sellingprice",sellingprice);
    scanf("%f",&sellingprice);
     printf("\n enter costprice",costprice);
    scanf("%f",&costprice);
    profit=sellingprice-costprice;
    loss=costprice-sellingprice;
    if(profit>loss)
    {
        printf("\n profit .%2f",profit);
    }
    else
    {
        printf("\n loss .%2f",loss);
    } 
    return 0;
}