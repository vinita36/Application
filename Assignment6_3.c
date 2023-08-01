// write a program to find factorial of given number

#include<stdio.h>

int Factorial(int iNo)
{
    int iRet = 0;
int iFact = 1;
  int iCnt = 0;
  for(iCnt = 1; iCnt <= iNo; iCnt++)
  {
    iFact = iFact * iCnt;
  }
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number\n");
    scanf("%d",&iValue);

    iRet = Factorial(iValue);
    printf("Factorial of number is %d",iRet);

    return 0;
}