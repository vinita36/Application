/* write a recursive program which display below pattern
input: 5
output: 5  4  3  2  1
*/
#include<stdio.h>

void DisplayR(int iNo)
{
   static int iCnt = 0;
   iCnt > 0;
   if(iCnt = iNo)
      {
         printf("%d\t", iCnt);
      
        iCnt--;
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