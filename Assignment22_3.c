// write a program which accept string from user and return difference between frequency of small 
//character and frequency of capital character
#include<stdio.h>
int Differance(char *str)
{
int small =0;
int capital = 0;
int iCount = 0;

while(*str != '\0')
    {
        if((*str >= 'a') && (*str <= 'z'))
        {
          iCount++;
        }
        else if((*str >= 'A') && (*str <= 'Z'))
        {
         iCount++;
        }
        str++;
    }
    int differance = small - capital;
    
return differance;
}

int main()
{
    char arr[20];
    int iRet = 0;

    printf("Enter string\n");
    scanf("%[^'\n']s",arr);
    iRet = Differance(arr);
    printf("Differance is :%d",iRet);
    return 0;
}