//write a program which display ascii table table contains symbol decimal, hexadecimal and octal 
//representation of every member from o to 255

#include<stdio.h>
void DisplayASCII()
{
int iCnt = 0;
for(iCnt = 0; iCnt <= 255; iCnt++)
{
    printf("%c\t%d\n",iCnt,iCnt);
}
}
int main()
{
    DisplayASCII();
    return 0;
}
