// write a program which accept total marks & obtained marks from user and calculate percentage

#include<stdio.h>

float Percentage(int iNo1, int iNo2)
{
    float fpercentage = 0;
    int total  = 0;
    int obtained  = 0;
    
    fpercentage = (obtained  / total ) * 100;
   return fpercentage; 
}




int main()
{
    int iValue1 =0, iValue2 = 0;
    float fRet = 0;

    printf("Please enter total marks\n");
    scanf("%d",&iValue1);

    printf("Please enter obtained marks\n ");
    scanf("%d",&iValue2);

    fRet = Percentage(iValue1,iValue2);
    printf(" fpercentage = %0.2f%%",fRet);
    return 0;

}