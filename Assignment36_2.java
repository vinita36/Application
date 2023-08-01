// write a java program which accept N number from user and accept one another number as No, return index of first occurance of that no

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

        System.out.println("Enter the elements :");
        for(int iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            Arr[iCnt] = sobj.nextInt();
        }
        
    }
    protected void Display()
    {
        System.out.println("Elements of linkedlist are:");
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

    public int FirstOccurance()
    {
     int iCnt = 0;
     int iNo = 0;
     for(iCnt = 0; iCnt < Arr.length; iCnt++)
     {
        if(Arr[iCnt] == iNo)
        {
            break;
        }
     }
     if(iCnt == Arr.length)
     {
        return -1;
     }
     else
     {
        return iCnt;
    }
    }

}
class Assignment36_2
{
    public static void main(String Arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the number of elements:");
        int iSize = sobj.nextInt();

        System.out.println("Enter the elements you want to search :");
          iSize = sobj.nextInt();

        MyArray mobj = new MyArray(iSize);
        mobj.Accept();
        mobj.Display();

        int iRet = mobj.FirstOccurance();

        if(iRet == -1)
        {
            System.out.println("There is no such elements");
        }
        else
        {
            System.out.println("the first occurance of"+iSize+ "index is :"+iRet);
        }
    }
}