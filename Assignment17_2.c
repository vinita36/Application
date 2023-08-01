/* Accept number of rows and number of columns from user and display below pattern
Inpit : iRow = 4   iCol = 4
Output :  2  4  6  8
          1  3  5  7
          2  4  6  8
          1  3  5  7
         
  */       
#include<stdio.h>

void Pattern(int iRow, int iCol)
{
 int i = 0;
 int j = 0;
 

 for(i = 1; i <= iRow; i++)
 {
    for(j = 1; j <= iCol; j++)
    {
        if((i % 2) != 0)
        {
        printf("%d\t",j*2);
        }
        else
        {
            printf("%d\t",j*2-1);
        }
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

