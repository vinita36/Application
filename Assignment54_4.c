/* write a recursive program which accept number from user and return its factorial
input: 5
output: 120
*/
#include<stdio.h>

int FactorialR(int iNo)
{
    int iCnt = 0;
   int iSum = 0;
   
   iCnt = 1;
   if(iCnt <=iNo/2)
      {
        if((iNo % iCnt) == 0)
        {
           iSum = iSum + iCnt;
        }
           iCnt++;
           FactorialR(iNo);
        
      }
      return iSum;
      
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter the number :\n");
    scanf("%d",&iValue);

    iRet = FactorialR(iValue);
    printf("Factorial are %d\n:",iRet);
    return 0;
}