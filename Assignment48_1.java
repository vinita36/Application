/*
 write a program which accept matrix from user and display transpose of thw matrix
 the transpose of given matrix is formed by interchanging the rows and columns of a matrix
 Input : 
 3  2  4  9
 4  3  2  2
 8  4  1  5
 3  9  7  5
 output:  
 3  4  8  3
 2  3  4  9
 5  2  1  7
 9  2  5  5     
 */
import java.util.*;

class Matrix
{
    public int Arr[][];
    int transpose[][];

    public Matrix(int i, int j)
    {
        Arr = new int[i][j];
        transpose = new int[i][j];
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
    public void Transpose()
    {
        
        for(int i = 0; i < Arr.length; i++)
        {
            for(int j = 0; j < Arr.length; j++)
            {
                transpose[j][i] = Arr[i][j];
            }
             
        }
      
    
    for(int i = 0; i < Arr.length; i++)
        {
            for(int j = 0; j < Arr.length; j++)
            {
                 System.out.print(transpose[i][j] + " ");
       
            }
             System.out.println();
        }
}
}

class Assignment48_1
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
        mobj.Transpose();
        
    }
}