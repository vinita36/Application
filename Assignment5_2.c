// write a program which accept number from user and print numbers till that number
#include<stdio.h>

void Display(int iNo)
{
    int iCnt ;
    
    
    for( iCnt = 1; iCnt <= iNo; iCnt++)
    {
    
        printf(" %d\t", iCnt);
    }
return;
    


}
int main()
{
    int iValue = 0;

    printf("Enter number\n");
    scanf("%d",&iValue);
    Display(iValue);

    return 0;

}
