// Accept character from user and check wether it is capital or not

#include<stdio.h>
#include<stdbool.h>
#define true 1
#define false 0

 typedef int BOOL;

BOOL ChkCapital(char ch)
{
    if((ch >= 'A') && (ch <= 'Z'))
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
    char cValue = '\0';
    BOOL bRet = false;

    printf("Enter the character\n");
    scanf("%c",&cValue);

    bRet = ChkCapital(cValue);

    if(bRet == true)
    {
        printf("It is a capital");
    }
    else
    {
        printf("It is not a capital");
    }
    return 0;
}