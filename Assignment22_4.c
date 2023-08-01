// Acept string from user and check wether it contains vowels in it or not

#include<stdio.h>
#include<stdbool.h>
#define true 1
#define false 0
int typedef BOOL;
BOOL ChkVowel(char *str)
{
    while(*str != '\0')
    {
        if((*str == 'a') || (*str == 'e') || (*str == 'i') || (*str == 'o') || (*str == 'u') ||(*str == 'A') || (*str == 'E') || (*str == 'I') || (*str == 'O') || (*str == 'U'))
        {
            return true;
        }
      str++;
    }
}    
int main()
{
    char arr[20];
    BOOL bRet = false;

    printf("Enter string\n");
    scanf("%[^'\n']s",arr);
    bRet = ChkVowel(arr);
    if(bRet == true)
    {
        printf("Contains vowels");
    }
    else
    {
        printf("There is no vowels");
    }
    return 0;

}