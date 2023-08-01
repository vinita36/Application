// write application which accept file name from user and read all data from that file and display contents on screen
#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>
#include<unistd.h>

int main()
{
    int fd = 0;
    char Fname[30];
    int iRet = 0;
    char Arr[50] = {'\0'};

    printf("Enter the file name that you want to open\n");
    scanf("%s",Fname);

    fd = open(Fname,O_RDWR);

    if(fd == -1)
    {
        printf("Unable to open file\n");
        return -1;
    }
    iRet = read(fd,Arr,5);

    printf("%d bytes get successfullyfetched the file \n",iRet);

    printf("Data from file is : %s\n",Arr);
    close(fd);
    return 0;
}