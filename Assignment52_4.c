//write a program which accept file name and one character from user and count number of occurrances of that character  from that file
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
            if(Arr[iCnt] == ch)
            {
                iCount++;
            }
        }
    }
    printf("the character %c occures %d time \n",ch, iCount);

    close(fd);
    return 0;
}