// write a program which accept number from user and display its table in reveres order

#include<stdio.h>

void TableRev(int iNo)
{
  int iRet =0;
  int iCnt= 0;
  printf("Table of %d in reverse order:\n",iRet);
  for(iCnt = 10; iCnt >= 1;iCnt--)
  {
    printf("%d * %d = %d\n", iRet, iCnt, iRet*iCnt);
  }
 return;
}
int main()
{
    int iValue = 0;

    printf("Enter number\n");
    scanf("%d",iValue);

    TableRev(iValue);
    return 0;
}