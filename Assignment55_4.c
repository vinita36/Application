
/* write a recursive program which accept number from user and return minimum digit
input: 87983
output: 3
*/
#include<stdio.h>

int MinimumR(int iNo)
{
    int iDigit = 0;
   int iMin = 9;
   
   while(iNo != 0)
      {
        iDigit = iNo % 10;
        if(iDigit < iMin)
        {
          iMin = iDigit;
          
        }
         iNo = iNo / 10;
          MinimumR(iNo);
        
      }
       return iMin;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter the number :\n");
    scanf("%d",&iValue);

    iRet = MinimumR(iValue);
    printf("Smallest digit are %d\n:",iRet);
    return 0;
}