/*
 write a java program which accept two array from user and check wether that array and its elements are pallindrome or not
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

    public boolean Pallindrome()
    {
        int iCnt = 0;
       int iReverse1 = 0;
       int iReverse2 = 0;
       
        for(iCnt = 0; iCnt < Arr.length; iCnt++)
        {
              iReverse1 = (iReverse1 * 10) + Arr[iCnt];
        }
        
        
         for(iCnt = 0; iCnt < Brr.length; iCnt++)
        {
          iReverse2 = (iReverse2 * 10) + Brr[iCnt];
        }
        if(iReverse1 == iCnt)  
        {
            return true;
        }
        else 
        {
            return false;
        }
        
    }
}

class Assignment43_5
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
       boolean bRet =  mobj.Pallindrome();
       if(bRet == true)
       {
        System.out.println("Pallindrome elements");
       }
       else
       {
        System.out.println("Pallindrome elements are not");
       }
    }
}