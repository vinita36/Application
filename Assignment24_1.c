// accept string from user and accept one character check wether that charcter is present in string or not

#include<stdio.h>
#include<stdbool.h>
#define true 1
#define false 0


int typedef BOOL;
BOOL ChkChar(char *str, char ch)
{
 while(*str != '\0')
 {
    if((*str >= 'A') &&(*str <= 'Z') || (*str >= 'a') && (*str <= 'z'))
    {
        return true;
    }
    else
    {
       
        return false;
    } 
    str++;
}
} 
int main()
{
    char arr[20];
    char cValue = '\0';
    BOOL bRet = false;

    printf("Enter string\n");
    scanf("%[^'\n']s",arr);

    printf("Enter character\n");
    scanf(" %c",&cValue);

    bRet = ChkChar(arr, cValue);

    if(bRet == true)
   {
    printf("character found");
   }
   else
   {
    printf("character not found");
   }
   return 0;
}