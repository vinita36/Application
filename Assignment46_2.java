/*
 write a java program which accept array from user and replace each member with summation of its digit
 Input:  89  687  56  549  87  9
         17  21  11  18  15 9
*/
import java.util.*;
class TwoArray
{
    public int Arr[];
    

    public TwoArray(int iSize)
    {
        Arr = new int[iSize];
    }
    public void Accept()
    {
        Scanner sobj = new Scanner(System.in);
        System.out.println("Enter the first elements:");

        for(int iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            Arr[iCnt] = sobj.nextInt();
        }
        
    }
    public void Display()
    {
       System.out.println("Elements of first array are:");
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
   
    public void SumDisplay()
    {   
        int iCnt = 0;
        for(iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            Arr[iCnt] = SumDigit(Arr[iCnt]);
        }
        System.out.println("Updated array :");

       for(iCnt = 0; iCnt < Arr.length; iCnt++)
       {
        System.out.println(Arr[iCnt]+ " ");
       }
       
    }
    public int SumDigit()
    {
       int iCnt = 0;
       int Sum = 0;
       int iNo = 0;
       while(iNo != 0)
       {
        Sum = iNo % 10;
        iNo = iNo / 10;
       }
       return Sum;
    }
}

class Assignment46_2
{
    public static void main(String Arg[])
    {
        Scanner sobj = new Scanner(System.in);

        int iNo = 0;
        System.out.println("Enter number of first element:");
        iNo = sobj.nextInt();

        MyArray mobj = new MyArray(iNo);
        mobj.Accept();
        mobj.Display();
        mobj.SumDigit();
        mobj.SumDisplay();
       
    }
}