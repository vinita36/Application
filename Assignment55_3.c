
/* write a recursive program which accept string from user and count small character
input: HellO WOrLD
output: 3
*/
#include<stdio.h>

int SmallR(char *str)
{
    int iCount = 0;
    while(*str != '\0')
    {
        if((*str >= 'a') && (*str <= 'z'))
        {
            iCount++;
        }
        str++;
        SmallR(str);
    }
    return iCount;
}

int main()
{
    char Arr [30];
    int iRet = 0;

    printf("Enter the string :\n");
    scanf("%[^'\n]s", Arr);

    iRet = SmallR(Arr);
    printf("Number of small character are  %d\n:",iRet);
    return 0;
}