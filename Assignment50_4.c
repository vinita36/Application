//write application which accept file name from user and display size of file
#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>
#include<unistd.h>

int main()
{
    int fd = 0;
    char Fname[30];
    long size;

    printf("Enter the file name:\n");
    scanf("%s",Fname);

    fd = open(Fname,"O_RDONLY");
    if(fd == NULL)
    {
       printf("Unable to open file\n");
       return -1;
    }
    fseek(fd, O_RDONLY, SEEK_END);
    size = ftell(fd);

    printf("The size of the file is %ld bytes\n",size);

    close(fd);
    return 0;
}