/* write a recursive program which display below pattern
input: 5
output: A  B  C  D  E
*/
#include<stdio.h>

void DisplayR(int iNo)
{
    static char ch = 'A';
   static int iCnt = 1;
   while(iCnt <= iNo)
      {
         printf("%c\t", ch);
       
         ch++;
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