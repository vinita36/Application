/*
 write a program which accept matrix from user and check wether the matrix is Sparse or not

 Input : 
 1  0  3  0
 0  6  0  0
 0  0  1  0
 9  0  0  9
 
 output:  
 true  
 */
import java.util.*;

class Matrix
{
    public int Arr[][];
    public Matrix(int i, int j)
    {
        Arr = new int[i][j];
    }
    public void Accept()
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter elements :");
        for(int i = 0; i < Arr.length; i++)
        {
            for(int j = 0; j < Arr.length; j++)
            {
                Arr[i][j] = sobj.nextInt();
            }
        }
    }
    public void Display()
    {
        System.out.println("elements of Matrix are:");
        for(int i = 0; i < Arr.length; i++)
        {
            for(int j = 0; j < Arr.length; j++)
            {
                System.out.print(Arr[i][j]+"\t");
            }
            System.out.println();
        }
    }
    public boolean SparseMatrix()
    {
        int m = 4;
        int n = 4;
        int iCount = 0;
         for(int i = 0; i < Arr.length ; i++)
        {
            for(int j = 0; j < Arr.length; j++)
            {
               if(Arr[i][j] == 0) 
               {
                    iCount++;
                    
               } 
            }
         }
                 
           if(iCount > (m * n / 2))
            {
                return true;
            }
             else 
               {
                  return false;
               } 
        }
    } 
    class Assignment48_5
{
    public static void main(String Arg[])
    {
        Scanner sobj = new Scanner(System.in);
        int iRow = 0, iCol = 0;

        System.out.println("Enter number of rows :");
        iRow = sobj.nextInt();

        System.out.println("Enter number of columns :");
        iCol = sobj.nextInt();

        Matrix mobj = new Matrix(iRow, iCol);
        mobj.Accept();
        mobj.Display();
        boolean bRet = mobj.SparseMatrix();
        if(bRet == true)
        {
            System.out.println("true");
        }
        else
        {
           System.out.println("False"); 
        }
        
    }
}