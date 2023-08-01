/*
 write a java programwhich accept number of rows and number of columns from user and display below pattern
 Input: iRow = 6   iCol = 6
  optput :
  *  *  *  *  *
  *  #  #  *  *
  *  #  *  $  *
  *  *  $  $  *
  *  *  *  *  *
   
 */
import java.util.*;

class Pattern
{
   public void Display(int iRow, int iCol)
   {
    int i = 0;
    int j = 0;

     for(i = iRow; i >= 1; i--)
        {
            for(j = 1; j <= iCol; j++)
            {
                if(i == j)
                {
                System.out.print("*" + " ");
                }
                else if((i == 1) || (i == iRow) || (j == 1) || (j == iCol))
                {
                    System.out.print("*" + " ");
                }
                else if(i > j)
                {
                    System.out.print("#" + " ");
                }
                else
                {
                  System.out.print("$" + " ");  
                }
            }
             System.out.println();
            
           
        }
   }
}

class Assignment45_4
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);
        int iNo1 = 0, iNo2 = 0;

        System.out.println("Enter number of rows :");
        iNo1 = sobj.nextInt();

        System.out.println("Enter number of columns :");
        iNo2 = sobj.nextInt();

        Pattern pobj = new Pattern();
        pobj.Display(iNo1, iNo2);
    }
}