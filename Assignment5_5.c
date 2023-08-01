//write a program which accept N and print first 5 multiples of N

#include<stdio.h>

void MultipleDisplay(int iNo)
{
 int iCnt = 0;
 int iMul = 1;
 for(iCnt = 1; iCnt <=5; iCnt++)
 {
    printf("%d \t",iMul * iCnt);
 }
}

int main()
{
    int iValue = 0;
    printf("Enter number");
    scanf("%d",&iValue);

    MultipleDisplay(iValue);
    return 0;

}