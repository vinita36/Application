/*
 write a program which accept matrix from user and display addition of each columns
 Input : 
 3  2  4  9
 4  3  2  2
 8  4  1  5
 3  9  7  5
 output:  18  18  15  25     
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
    public void AddCol()
    {
        int iSum = 0;
        

        for(int i = 0; i < Arr.length; i++)
        {
            for(int j = 0; j < Arr[j].length; j++)
            {
                if(i == j)
                {
                    iSum = iSum + Arr[i][j];
                }
                
            }
         System.out.println("Addition of columns is  :"+iSum);
         iSum = 0;  
        }     
    }
}

class Assignment47_4
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
        mobj.AddCol();
        
    }
}