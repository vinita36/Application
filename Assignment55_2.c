/* write a recursive program which accept number from user and return largest digit
input: 87983
output: 9
*/
#include<stdio.h>

int LargeR(int iNo)
{
    int iDigit = 0;
   int iMax = 0;
   
   while(iNo != 0)
      {
        iDigit = iNo % 10;
        if(iDigit > iMax)
        {
          iMax = iDigit;
          
        }
         iNo = iNo / 10;
          LargeR(iNo);
        
      }
       return iMax;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter the number :\n");
    scanf("%d",&iValue);

    iRet = LargeR(iValue);
    printf("Largest digit are %d\n:",iRet);
    return 0;
}