/* write a recursive program which accept number from user and return its product of digit
input: 523
output: 30
*/
#include<stdio.h>

int MultiR(int iNo)
{
    int iDigit = 0;
   int iMul = 1;
   
   while(iNo != 0)
      {
        iDigit = iNo % 10;
        iMul = iMul * iDigit;
        iNo = iNo / 10;

        MultiR(iNo);
      }
       return iMul;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter the number :\n");
    scanf("%d",&iValue);

    iRet = MultiR(iValue);
    printf("Multiplication are %d\n:",iRet);
    return 0;
}