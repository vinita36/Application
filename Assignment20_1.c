// Accept charater from user and check wether it is alphabate or not 

#include<stdio.h>
#include<stdbool.h>
#define true 1
#define false 0

typedef int BOOL;

BOOL ChkAlpha(char ch)
{
    if((ch >= 'A') && (ch <= 'Z') || (ch >= 'a') && (ch <= 'z'))
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
    bRet = ChkAlpha(cValue);

    if(bRet == true)
    {
        printf("It  is character ");
    }
    else
    {
        printf("It is not a character");
    }
    return 0;
}