/* Accept number of rows and number of columns from user and display below pattern
Inpit : iRow = 4   iCol = 4
Output : 1  2  3  4
         5  6  7  8
         9  1  2  3
         4  5  6  7
  */       
#include<stdio.h>

void Pattern(int iRow, int iCol)
{
 int i = 0;
 int j = 0;
 int count = 1;

 for(i = 1; i <= iRow; i++)
 {
    for(j = 1; j <= iCol; j++)
    {
        printf("%2d\t",count);
        count = (count % 9) + 1;
    }
    
    printf("\n");
 }
}
int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter number of rows \n");
    scanf("%d", &iValue1);

    printf("Enter number of columns \n");
    scanf("%d", &iValue2);
    Pattern(iValue1, iValue2);
    return 0;
}

