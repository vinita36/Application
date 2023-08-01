/*
Design application for hotel. according the management team of 
hotel they are giving discount on total bil amount of customer.
if bil bil amount is less than 500 then there is no discount 
if bill amount is iess than 1500 and more than 500 they give 10% discount.
and if the bill amount is more than 1500 then they give 15% discount 
our application should accept total bill amount and depends on the discount policy we have to return
the amount after applying discount 
*/
#include<stdio.h>

float CalculateBill(int iAmount)
{
 if(iAmount <= 500)
{
    printf("there is no discount\n");
}
else if((iAmount <= 500) && (iAmount >= 1500))
{
    printf(" discount\n");
}
else if(iAmount > 1500)
{
    printf("they give 15% discount\n");
}

}
int main()
{
    int iValue = 0;
    printf("Enter your amount\n");
    scanf("%d",&iValue);
    CalculateBill(iValue);
    return 0;
}