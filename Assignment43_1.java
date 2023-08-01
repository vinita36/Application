/*
 write a java program which accept two array from user and return differance between Summation of array
 Input:  2  9  7  5  2  3
         9  3  5  5
output:
        (28 - 22) = 6

    
 */
import java.util.*;
class TwoArray
{
    public int Arr[];
    public int Brr[];

    public TwoArray(int iSize1, int iSize2)
    {
        Arr = new int[iSize1];
        Brr = new int[iSize2];
    }
    public void Accept()
    {
        Scanner sobj = new Scanner(System.in);
        System.out.println("Enter the first elements:");

        for(int iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            Arr[iCnt] = sobj.nextInt();
        }
        System.out.println("Enter the second elements:");

        for(int iCnt = 0; iCnt < Brr.length; iCnt++)
        {
            Brr[iCnt] = sobj.nextInt();
        }
    }
    public void Display()
    {
       System.out.println("Elements of first array are:");
        for(int iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            System.out.println(Arr[iCnt]);
        }

        System.out.println("Elements of second Array are :");
        for(int iCnt = 0; iCnt < Brr.length; iCnt++)
        {
            System.out.println(Brr[iCnt]);
        }

    }
}

class MyArray extends TwoArray
{
    public MyArray(int iSize1, int iSize2)
    {
        super(iSize1, iSize2);
    }

    public int  DiffSummation()
    {
        int iCnt = 0;
        int iSum1 = 0;
        int iSum2 = 0;
        int iDiff = 0;
      
        for(iCnt = 0; iCnt < Arr.length; iCnt++)
        {
              iSum1 = iSum1 + Arr[iCnt];
        }
       
          for(iCnt = 0; iCnt < Brr.length; iCnt++)
        {
          iSum2 = iSum2 + Brr[iCnt];
        }
        iDiff = iSum1 - iSum2;
        return iDiff;
    }
     
     

}

class Assignment43_1
{
    public static void main(String Arg[])
    {
        Scanner sobj = new Scanner(System.in);

        int iNo1 = 0, iNo2 = 0;
        System.out.println("Enter number of first element:");
        iNo1 = sobj.nextInt();

        System.out.println("Enter number ofsecond elements :");
        iNo2 = sobj.nextInt();

        MyArray mobj = new MyArray(iNo1, iNo2);
        mobj.Accept();
        mobj.Display();
       int iRet =  mobj.DiffSummation();
       System.out.println("Differance of Summation is:"+iRet);
    }
}