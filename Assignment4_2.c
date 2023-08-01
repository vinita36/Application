// write a program which accept one number from user and check wether that number is greater than 100 or not

#include<stdio.h>

typedef int Bool;
#define TRUE 1
#define FALSE 0

Bool ChkGreater(int iNo)
{
    if(iNo  >= 100)
    {
        return TRUE;
    }
   else
   {
    return FALSE;
   }
}

int main()
{
    int iValue = 0;
    Bool bRet = FALSE;

    printf("please enter number \n");
    scanf("%d",&iValue);

    bRet = ChkGreater(iValue); 

    if(bRet == TRUE)
    {
        printf("Greater");
    }   
    else
    {
        printf("smaller");
    } 
    return 0;
}