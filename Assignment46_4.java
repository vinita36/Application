/*
 write a java program which accept array of character from user and and count number of capital character Input:  
        b  N  j  B  R  b A d G  G
 output : 6
*/

import java.util.*;

class ArrayX
{
    public char Arr[];
    

    public ArrayX(int iSize)
    {
        Arr = new char[iSize];
    }
    public void Accept()
    {
        Scanner sobj = new Scanner(System.in);
        System.out.println("Enter the first elements:");

        for(int iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            Arr[iCnt] = sobj.next().charAt(0);
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
class MyArray extends ArrayX
{
    public MyArray(int iSize)
    {
        super(iSize);
    }
    public int CountCapital()
    {
        int iCount = 0;
      for(int iCnt = 0; iCnt < Arr.length; iCnt++)
      {
        if((Arr[iCnt] > 'A') && (Arr[iCnt] < 'Z'))
        {
            iCount++;
        }
      }
      return iCount;
        }
}
class Assignment46_4
{
    public static void main(String Arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter number of array:");
        int iSize = sobj.nextInt();

        MyArray mobj = new MyArray(iSize);
        mobj.Accept();
        mobj.Display();
        int iRet = mobj.CountCapital();
        System.out.println("Capital character are :"+iRet);
    }
}