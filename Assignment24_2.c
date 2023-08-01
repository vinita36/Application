// accept string from user and accept one character return frequency of that character
#include<stdio.h>


int CountChar(char *str, char ch)
{
    int frequency = 0;
 while(*str != '\0')
 {
    if(*str == ch) 
    {
        frequency++;
    }
    str++;
   
}
return frequency;
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

    iRet = CountChar(arr, cValue);
    printf("character frequency is %d",iRet);
    return 0;
}