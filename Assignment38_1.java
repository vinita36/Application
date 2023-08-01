//write a java program which accept number of rows and number of columns from user and display below pattern
/*
 iRow = 4             iCol = 4
 A  B  C  D
 A  B  C  D
 A  B  C  D
 A  B  C  D
 */
import java.util.*;

class Pattern
{
    public void Display(int iRow, int iCol)
    {
        int i = 0; 
        int j = 0;
        char ch = 'A';
        

        for(i = 1; i <= iRow; i++)
        {
            for(j = 1, ch = 'A'; j <= iCol; j++, ch++)
            {
                System.out.print(ch +" ");
            }
            
            System.out.println();
        }
        
    }
}

class Assignment38_1
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