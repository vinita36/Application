/*
Accept number of rows and number columns from user and display below pattern
Input : iRow = 4   ico; = 4
Output:  A  B  C  D
         a  b  c  d
         A  B  C  D
         a  b  c  d


*/
#include<stdio.h>
void Pattern(int iRow, int iCol)
{
 int i = 0;
 int j = 0;
 
 char ch1 = 'A';
 char ch2 = 'a';
 
 for (i = 1; i <= iRow; i++)
 {
    for(j = 1,ch1 = 'A', ch2 = 'a'; j <= iCol; j++, ch1++,ch2++)
    {
      if((i % 2) == 0)
      {
        printf("%c\t",ch2);
        
      }
      else
      {
        printf("%c\t",ch1);
        
      }
    }
    printf("\n");
 }
}
int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter number of rows\n");
    scanf("%d",&iValue1);

    printf("Enter number of columns\n");
    scanf("%d",&iValue2);

    Pattern(iValue1, iValue2);
    return 0;
}