/*
 write a java program which accept array from user and and display below pattern
 Input: 8  9  7  6  4  2  4

 Output: *  *  *  *  *  *  *  *
         *  *  *  *  *  *  *  *  *
         *  *  *  *  *  *  *
         *  *  *  *
         *  *
         *  *  *  *
 */
import java.util.*;

class TwoArray
{
    public char Arr[];

    public TwoArray(int iSize)
    {
        Arr = new char[iSize];
    }

    public void Accept()
    {
        Scanner sobj = new Scanner(System.in);
        System.out.println("Enter the elements :");
        for(int iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            Arr[iCnt] = sobj.next().charAt(0);
        }
    }
    public void Display()
    {
        System.out.println("Elements of array are:");
        for(int iCnt = 0; iCnt < Arr.length; iCnt++)
        {
          System.out.println(Arr[iCnt]);
        }
    }
    
}
class MyArray extends TwoArray
{
    public MyArray(int iSize)
    {
        super(iSize);
    }
    
    public void DisplayPattern()
    {
        int i = 0;
        int j = 0;
       for(i = 0; i < Arr.length; i++)
       {
        for(j = 0; j < Arr[i]; j++)
        {
        System.out.print("*"+" ");
        }
        System.out.println();
       }
      
    }
  }


 class Assignment44_5
 {
  public static void main(String Arg[])
  {
    Scanner sobj = new Scanner(System.in);
     
    System.out.println("Enter number of elements:");
    int iNo = sobj.nextInt();

    MyArray mobj = new MyArray(iNo);
    mobj.Accept();
    mobj.Display();
    mobj.DisplayPattern();
  }
 }