// write a program which accept number from user and display its table

#include<stdio.h>

void Table(int iNo)
{
 int iRet = 0;
 int iCnt = 0;
int iTable = 0;
 printf("Table of %d\n",iRet);

 for(iCnt = 1; iCnt <= 10; iCnt++)
 {
 iTable = iRet * iCnt;
 printf("%d * %2d = %2d\n",iRet, iCnt ,iTable);
 }
}
int main()
{
    int iValue = 0;

    printf("Enter number\n");
    scanf("%d",iValue);

    Table(iValue);
    return 0;
}