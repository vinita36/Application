//write a program which accept from number from user and return summetion of of all its non factor

#include<stdio.h>

int SumNonFact(int iNo)
{
    int iCnt = 0;
   int iSum = 0;
    for(iCnt = 2; iCnt <= (iNo);iCnt++)
    {
        if((iNo % iCnt) != 0)
        {
            
            iSum = iSum + iCnt;
        }
    } 
    return iSum;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("enter number \n");
    scanf("%d",&iValue);

    iRet = SumNonFact(iValue);

    printf("%d",iRet);

    return 0;
}