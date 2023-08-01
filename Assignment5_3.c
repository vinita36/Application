// write a program which accept number from user and print its numbers line

#include<stdio.h>

void Display(int iNo)
{
  int iRet = 0;
  int iCnt = 0;
  
  for( int iCnt = 0; iCnt <= iNo; iCnt++)
  printf("%d",iCnt);
  return ;
}

int main()
{
    int iValue = 0;
    printf("Enter number");
    scanf("%d",&iValue);

    Display(iValue);
    return 0;
}