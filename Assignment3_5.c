// write a program which accept number from user and return differance between summetion of all its factors and non factors

#include<stdio.h>

int FactDiff(int iNo)
{
    int iCnt = 0;
      int iFact = 0;
      int iNonFact = 0;
      int Diff = 0;
      for(iCnt = 1; iCnt <= (iNo/2); iCnt++)
      {
        if((iNo % iCnt) == 0)
        {
            iFact = iFact + iCnt;
        }
        }
      for(iCnt = 1; iCnt <= iNo; iCnt++)
      {
        if((iNo % iCnt) != 0)
        {
            iNonFact = iNonFact + iCnt;
        }
      }
         int iDiff = iFact - iNonFact;
     
        return iDiff;
    }
    

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number\n");
    scanf("%d",&iValue);

    iRet = FactDiff(iValue);
    printf("%d",iRet);

    return 0;
}