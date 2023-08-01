// accept one number from user and print that number of *on screen

#include<stdio.h>

void Accept( int iNo)
{
    int icnt = 0;
    for(icnt = 1; icnt <= 5; icnt ++)
    {
        printf("*");
    }
    
}
int main()
{
    int iValue = 0;
    iValue = 5;

     Accept(iValue);

    return 0;
}
