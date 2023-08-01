/* write a recursive program which display below pattern
input: 5
output: 1  2  3  4  5
*/
#include<stdio.h>

void DisplayR(int iNo)
{
   static int iCnt = 1;
   if(iCnt <= iNo)
      {
         printf("%d\t", iCnt);
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