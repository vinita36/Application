/* write a recursive program which accept number from user and return summation of its digit
input: 879
output: 24
*/
#include<stdio.h>

int SumDigitR(int iNo)
{
   int Sum = 0;
   int iDigit = 0;
   
   while(iNo != 0)
      {
         iDigit = iNo % 10;
         Sum = Sum + iDigit;
         iNo = iNo / 10;
         SumDigitR(iNo);
      }
      return Sum;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter the number :\n");
    scanf("%d",&iValue);

    iRet = SumDigitR(iValue);
    printf("Sum of digits are %d\n:",iRet);
    return 0;
}