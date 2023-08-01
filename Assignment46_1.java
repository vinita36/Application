/*
 write a java program which accept array from user and reverse each number of that array
 Input:  89  687  56  549  87  9
         98  786  65  945  78 9

    
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

    public void Reverse()
    {
       int iCnt = 0;
      
       for(iCnt = 0; iCnt < Arr.length; iCnt++)
       {
         int Reverse = 0;
       int No = Arr[iCnt];
       int iDigit = 0;

        while(No != 0)
        {
          iDigit = No % 10;
        Reverse = (Reverse * 10) + iDigit;
        No = No / 10;
        }
        No = Reverse;
       }

       System.out.println("Erverse number are :"+No);
    }
}

class Assignment46_1
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
        mobj.Reverse();
       
    }
}