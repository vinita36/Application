//Accept character from user and check wether it is digit or no (0-9)

#include<stdio.h>
#include<stdbool.h>

#define true 1
#define false 0

typedef int BOOL;
BOOL ChkDigit(char ch)
{
if((ch >= '0') && (ch <= '9'))
{
    return true;
}
else{
    return false;
}
}
int main()
{
    char cValue = '\0';
    BOOL bRet = false;

    printf("Enter the character\n");
    scanf("%c",&cValue);

    bRet = ChkDigit(cValue);
    if(bRet == true)
    {
        printf("It id a digit");
    }
    else
    {
        printf("It is not a digit");
    }
    return 0;
}