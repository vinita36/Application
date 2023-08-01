// write a program which accept two numbers and check wether numbers are equl or not

#include<stdio.h>
typedef int Bool;
#define TRUE 1
#define FALSE 0

Bool ChkEqual(int iNo1,int iNo2)
{
    if(iNo1 == iNo2)
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}
int main()
{
    int iValue1 = 0, iValue2 = 0;
    Bool bRet = FALSE;

    printf(" enter first number\n");
    scanf("%d",&iValue1);
    printf(" enter second number\n");
    scanf("%d",&iValue2);
    

    bRet = ChkEqual(iValue1,iValue2 );
    if(bRet == TRUE)
    {
        printf("equal");
    }
    else
    {
        printf("not equal");
    }
    return 0;


}