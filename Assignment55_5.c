
/* write a recursive program which accept number from user and return reverse number
input: 87983
output: 3
*/
#include<stdio.h>

int ReverseR(int iNo)
{
    int iDigit = 0;
   int iReverse = 0;
   
   while(iNo != 0)
      {
        iDigit = iNo % 10;
        iReverse = (iReverse * 10)+iDigit;
         iNo = iNo / 10;
          ReverseR(iNo);
        
      }
       return iReverse;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter the number :\n");
    scanf("%d",&iValue);

    iRet = ReverseR(iValue);
    printf("reverse number are %d\n:",iRet);
    return 0;
}