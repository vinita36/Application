// write a program which accept number from user and display all its non factors

#include<stdio.h>

int NonFact(int iNo)
{
     int iCnt = 0;
    for(iCnt = 2 ; iCnt < (iNo ); iCnt ++)
    {
    if((iNo % iCnt) != 0)
        
    {
    printf("%d\n",iCnt);
}
    }
}

int main()
{

    int iValue = 0;

    printf("Enter number\n");
    scanf("%d",&iValue);

    NonFact(iValue);

    return 0;

    }