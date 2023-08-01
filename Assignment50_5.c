//write application which accept file name from user and one string from user write that string at the end of file
#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>
#include<unistd.h>
#include<string.h>

int main()
{
    int fd = 0;
    char Fname[30];
    int iRet = 0;
    char Arr[50];

    printf("Enter the file name that you want to open\n");
    scanf("%s",Fname);

    printf("Emter the data that you want to write into the file\n");
    scanf(" %[^'\n']s",Arr);

    fd = open(Fname, O_RDWR | O_APPEND);

    if(fd == -1)
    {
        printf("Unable to open file\n");
        return -1;
    }

    iRet = write(fd,Arr,strlen(Arr));

    printf("%d bytes gets successfully written in the file\n",iRet);
    close(fd);

    return 0;
}