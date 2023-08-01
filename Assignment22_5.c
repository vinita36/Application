//accept string from user and display it in reverse order
#include<stdio.h>
void Reverse(char *str)
{
    int iLength = 0;
    int iCnt = 0;
    for( iCnt = iLength-1; iCnt >= 0; iCnt--)
    {
        printf("%c",iCnt);
    }
    iCnt++;
    

    
}
int main()
{
    char arr[20];
    printf("Enter string\n");
    scanf("%[^'\n']s",arr);

    Reverse(arr);
    return 0;
}