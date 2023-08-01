/* 
write a recursive program which display below pattern
Input:5
output: *  *  *  *  *
*/
#include<stdio.h>

void DisplayR(int iNo)
{
   static int iCnt = 1;
   while(iCnt <= iNo)
      {
         printf("*\t");
       
         iCnt++;
       DisplayR(iNo);
      }
}

int main()
{
    int iValue = 0;

    printf("Enter the number :\n");
    scanf("%d",&iValue);

    DisplayR(iValue);
    return 0;
}