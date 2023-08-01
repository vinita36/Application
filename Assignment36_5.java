//write a java program which accept N number from user and return product of all odd elements

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
    System.out.println("Elements of array are :");
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

    public int OddProduct()
    {
        int iCnt = 0; 
        int iProduct = 1;
      
        for(iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            if((Arr[iCnt] % 2) != 0)
            {
                iProduct = iProduct * Arr[iCnt];
            }
        }
        return iProduct;
    }
}
class Assignment36_5
{
    public static void main(String Arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the number of elements :");
        int iSize = sobj.nextInt();

        MyArray mobj = new MyArray(iSize);
        mobj.Accept();
        mobj.Display();

        int iRet = mobj.OddProduct();
        System.out.println("PRoduct of all odd elements are :"+iRet);
    }
}
