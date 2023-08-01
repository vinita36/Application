// write a program which accept number from user and if number is less than 50 then print small ,if it is greater than 50 and less than 100 then print medium , if it is greater than 100 then print large.

// 0 to 50             small
// 50 to 100            medium
// greater than 100     large

#include<stdio.h>

void Number(int iNo)
{
    int iNumbers;
    
{
    if(iNumbers < 50)
       {
        printf("Small\n");
        }
       else if((iNumbers >= 50 )&&(iNumbers < 100))
        {
            printf("Medium\n");
        }
        else 
        {
            printf("Large\n");
        }
} 
}      

int main()
{
    int iValue = 0;
    printf("Enter number\n");
    scanf("%d",&iValue);

    Number(iValue);
    return 0;
}