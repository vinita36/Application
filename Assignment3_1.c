//// Write a program which accept number from user and display its multiplication of factors



#include<stdio.h>

int MulFact(int iNo)
{
     int iMul = 1;
      int iCnt = 0;

   for(iCnt = 1; iCnt <= iNo; iCnt++)
   {
    if((iNo % iCnt) == 0)
    {
    
    iMul = iMul * iCnt;
    }
    return iMul;
    
   }
    
   
}


int main()
{
int iValue = 0;
int iRet = 0;

printf("Enter number");
scanf("%d",&iValue);

iRet = MulFact(iValue);

printf("%d",iRet);

return 0;
}