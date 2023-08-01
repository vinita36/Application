//write a java program which accept number of rows and number of columns from user and display below pattern
/*
 iRow = 3             iCol = 5
 5  4  3  2  1
 5  4  3  2  1
 5  4  3  2  1
 */
import java.util.*;

class Pattern
{
    public void Display(int iRow, int iCol)
    {
        int i = 0; 
        int j = 0;
        
         for(i = 1; i <= iRow; i++)
        {
            for(j = iCol; j >= 1; j--)
            {
                System.out.print(j +" ");
            }
            
            System.out.println();
        }
        
    }
}

class Assignment39_5
{
    public static void main(String Arg[])
    {
        Scanner sobj = new Scanner(System.in);
        int iValue1 = 0, iValue2 = 0;

        System.out.println("Enter number of rows :");
        iValue1 = sobj.nextInt();

        System.out.println("Enter number of columns :");
        iValue2 = sobj.nextInt();

        Pattern pobj = new Pattern();
        pobj.Display(iValue1, iValue2);
    }
}