//write a program which accept file name from user and count number of small character from that file
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

    printf("Enter file that you want to open\n");
    scanf("%s",FileName);

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
            if((Arr[iCnt] >= 'a') && (Arr[iCnt] <= 'z'))
            {
                iCount++;
            }
        }
    }
    printf("Number of Small case letters are : %d\n", iCount);

    close(fd);
    return 0;
}