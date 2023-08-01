// write a program which accept number from user and check wether it contains 0 in it or not.

#include<stdio.h>
#include<stdbool.h>

bool ChkZero(int iNo)
{
     
    int iDigit = 0;

    while(iNo == 0)
    {
      iDigit = iNo % 10;
      if(iDigit == 0)
      {
        break;
      }
      
      iNo = iNo /10;
    }
    if(iNo == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
 int iValue = 0;
 bool bRet = false;

 printf("Enter number :\n");
    scanf("%d",&iValue);
    
    bRet = ChkZero(iValue);
    if(bRet == true)
    {
        printf("It contains zero\n");

    }
    else
    {
         printf("There is no zero\n");

    }


    return 0;
}