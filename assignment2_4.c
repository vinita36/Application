// Accept two numbers from user and display first number in second numbers of time

#include<stdio.h>

void Display(int iNo, int iFrequency)
{
    int i = 0;
    for(i = 1; i <= iFrequency; i++)
    {
        printf("%d",iNo);

    }
}
int main()
{
    int iValue = 0;
    int icount = 0;

    printf("Enter number");
    scanf("%d",&iValue);

    printf("Enter Frequency");
    scanf("%d",&icount);

    Display(iValue,icount);
    return 0;
}

