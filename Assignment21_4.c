//accept character from user and check wether it is special symbol or not(! @ # $ % ^ & *)

#include<stdio.h> 
#include<stdbool.h>
#define true 1
#define false 0
int typedef BOOL;

BOOL checkSpecial(char ch)
{
  if((ch == '!') || (ch == '@') || (ch == '#') ||(ch == '$') ||(ch == '%') || (ch == '^') || (ch == '&') || (ch == '*'))
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
    bRet = checkSpecial(cValue);
    if(bRet == true)
    {
        printf("It is special character");
    }
    else
    {
        printf("It is not special character");
    }
    return 0; 
}