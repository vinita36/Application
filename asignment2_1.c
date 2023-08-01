// Accept one number from user and print that number of * on screen

#include<stdio.h>

void Display( int iNo)
{
    int icnt = 0;
    for(icnt = 1; icnt <= 10; icnt ++)
    {
        printf("*");
    }
    
}
int main()
{
    int iValue = 0;
    printf("Enter number");
    scanf("%d",&iValue);
    Display(iValue);
    return 0;
}



