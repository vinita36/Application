// write a program to accept three input and print its multiplication

#include<stdio.h>

int Multiply(int iNo1, int iNo2, int iNo3)
{
    int iMul = 0;
    
  iMul = iNo1 * iNo2 * iNo3;
 return iMul;
}

int main()
{
    int iValue1 = 0, iValue2 = 0, iValue3 = 0, iRet = 0;

    printf("Please enter three numbers\n");
    scanf("%d %d %d",&iValue1,&iValue2,&iValue3);

    iRet = Multiply(iValue1,iValue2,iValue3);

    printf("%d",iRet);
    return 0;


}