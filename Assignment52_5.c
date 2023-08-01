//write a program which accept file name and one count from user and read that number of character from starting position
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<fcntl.h>
#include<unistd.h>

#define BUFFERSIZE 1024
int main()
{
    char FileName[50];
    int fd = 0;
    char Arr[BUFFERSIZE];
    int iRet = 0, iCnt = 0, iCount = 0;
    char ch = '\0';

    printf("Enter file that you want to open\n");
    scanf("%s",FileName);

    printf("Enter the character\n");
    scanf(" %c",&ch);

    printf("Enter the number of character to read:");
    scanf("%d",&iCount);

    fd = open(FileName, O_RDONLY);

    while(1)
    {
        iRet = read(fd,Arr,sizeof(Arr));

        if(iRet == 0)
        {
            break;
        }
        for(iCnt = 0; iCnt < iRet; iCnt++)
        {
            char currentChar = get(fd);
            if(currentChar == ch)
            {
                printf("%c",currentChar);
            }
        }
    }
    
    close(fd);
    return 0;
}