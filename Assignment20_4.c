// Accept character from user and check wether it is small case or not(a-z)
#include<stdio.h>
#include<stdbool.h>
#define true 1
#define false 0
typedef int BOOL;

BOOL ChkSmall(char ch)
{
  if((ch >= 'a') && (ch <= 'z'))
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

 bRet = ChkSmall(cValue);
 if(bRet == true)
 {
    printf("It is a small case");
 }
 else
 {
    printf("It is not a small case");
 }
 return 0;
}