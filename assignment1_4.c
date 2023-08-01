

//  Accept one number and check wether it is divisible by 5 or not

#include<stdio.h>
#include<stdbool.h>
/////////////////////////////////////////////////////////////////
//  Function Name: CheckDivisible 
//  Input : Integer
//  Output : Boolean
//  Description : check wether input is divisible by 5
//  Author : Vinita Suryabhan Indrale
//  Date : 26/04/2023
////////////////////////////////////////////////////////////////

typedef int BOOl;
#define TRUE 1
#define FALSE 0

bool Check( int iNo)
{
if((iNo % 5)==0)
{
    return TRUE;
}
else
{
    return FALSE;
}
}

//////////////////////////////////////////////////////////////////
//  Entery point function
////////////////////////////////////////////////////////////////
int main()
{
int iValue = 0;
bool bRet = FALSE;
printf("Enter number");
scanf("%d",&iValue);

bRet = Check(iValue);
if(bRet == TRUE)
{
    printf("Divisible by 5");
}
else{
    printf("Not Divisible by 5");
}



    return 0;
}
