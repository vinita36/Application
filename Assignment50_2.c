// write application which accept file name from user and create that file

#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>
#include<unistd.h>

int main()
{
 
 int fd = 0;
 char Fname[30];

 printf("Enter the file name that you want to create\n");
 scanf("%d",Fname);

 fd = creat(Fname,0777);

 if(fd == -1)
 {
    printf("Unable to create the file\n");
    return -1;
 }
 else
 {
    printf("File is successfully created\n");
 }

    return 0;
}