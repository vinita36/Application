//write a program which accept string from user reverse that string in place
#include<stdio.h>

void StrRev(char *str)
{
 int iLength = 0;
    int iCnt = 0;
    for( iCnt = iLength-1; iCnt >= 0; iCnt--)
    {
        printf("%c",iCnt);
    }
}
int main()
{
    char arr[20];
    printf("Enter string\n");
    scanf("%[^'\n']s",arr);

    StrRev(arr);
    return 0;
}