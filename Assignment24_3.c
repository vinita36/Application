// accept string from user and accept one character return index of first occurance of that character
#include<stdio.h>
#define ERR_NOTFOUND -1

int FirstChar(char *str, char ch)
{
    int iCnt = 1;
    int iPos = ERR_NOTFOUND;
 while(*str != '\0')
 {
    if(*str == ch) 
    {
        iPos = iCnt;
        break;
    }
    str++;
   iCnt++;
}
return iPos;
} 
int main()
{
    char arr[20];
    char cValue = '\0';
    int iRet = 0;

    printf("Enter string\n");
    scanf("%[^'\n']s",arr);

    printf("Enter character\n");
    scanf(" %c",&cValue);

    iRet = FirstChar(arr, cValue);
    printf("character frequency is %d",iRet);
    return 0;
}