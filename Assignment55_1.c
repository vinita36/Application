
/* write a recursive program which accept string from user and count white spaces
input: He  llo Wo rld
output: 4
*/
#include<stdio.h>

int WhiteSpaceR(char *str)
{
    int iCount = 0;
    while(*str != '\0')
    {
        if(*str == ' ')
        {
            iCount++;
        }
        str++;
        WhiteSpaceR(str);
    }
    return iCount;
}

int main()
{
    char Arr [30];
    int iRet = 0;

    printf("Enter the string :\n");
    scanf("%[^'\n]s", Arr);

    iRet = WhiteSpaceR(Arr);
    printf("Number of whitespaces are  %d\n:",iRet);
    return 0;
}