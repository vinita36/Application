// write a java program which accept N number from user and accept one number as No,check wether No is present or not
import java.util.*;

class ArrayX
{
    protected int Arr[];

    public ArrayX(int iSize)
    {
        Arr = new int[iSize];
    }

    protected void Accept()
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the elements:");
        for(int iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            Arr[iCnt] = sobj.nextInt();
        }
        System.out.println("Enter the elements you want to search :");
        int iSize = sobj.nextInt();
    }
    protected void Display()
    {
        System.out.println("Elements of Array are :");

        for(int iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            System.out.println(Arr[iCnt]+"\t");
        }
    }
}

class MyArray extends ArrayX
{
    public MyArray(int iSize)
    {
        super(iSize);
    }


    public boolean ChkNumber()
    {
      int iSearch = 0;
      int iCnt = 0;
      
      for(iCnt = 0; iCnt < Arr.length; iCnt++)
      {
        if(Arr[iCnt] == iSearch)
        { 
            break;
        }
     }
     if(iCnt == Arr.length)
     {
        return false;
     }
     else
     {
        return true;
     }
    }
}
class Assignment36_1
{
    public static void main(String Arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter number of elements:");
        int iSize = sobj.nextInt();
      
        MyArray mobj = new MyArray(iSize);
        mobj.Accept();
        mobj.Display();

        boolean bRet = mobj.ChkNumber();

        if(bRet == true)
        {
            System.out.println("Number is not present");
        }
        else
        {
            System.out.println("Number present");
        }
    }
}
