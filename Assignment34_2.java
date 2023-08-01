// write a program which accept N number from user and Display all such elements which divisible by 5

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
        System.out.println();
    }
   
}
 class MyArray extends ArrayX
 {
    public MyArray(int iSize)
    {
        super(iSize);
    }

    public void Divisible()
 {
      
   for(int iCnt = 0; iCnt < Arr.length; iCnt++)
      {
        if((Arr[iCnt] % 5) == 0)
        {
            System.out.println(Arr[iCnt]);
        }
        
      }
      
 }
 }

class Assignment34_2
{
    public static void main(String Arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the number of elements:");
        int iSize = sobj.nextInt();
 
        MyArray mobj = new MyArray(iSize);
        mobj.Accept();
        mobj.Display();

        //System.out.println("elements is :"+mobj.Divisible());

    }
}