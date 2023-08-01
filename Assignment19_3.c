/* Accept number of rows and number of columns from user and display below pattern
Inpit : iRow = 4   iCol = 4
Output :  $  *  *  *
          #  $  *  *
          #  #  $  *
          #  #  #  $
         
  */       
#include<stdio.h>

void Pattern(int iRow, int iCol)
{
 int i = 0;
 int j = 0;
 if(iRow != iCol)
 
 {
    printf("Invalid input\n");
     return;
 }
 

 for(i = 1; i <= iRow; i++)
 {

    for(j = 1; j <= i; j++)
    {
        if(i == j)
    {
        printf("$\t");
        
    }
    else if(i < j)
    {
        printf("*\t");
    }
    else
    {
        printf("#\t");
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

