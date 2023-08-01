// write a java program which accept N number from user and accept one another number as No, return index of last occurance of that No.
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
    System.out.println("Enter the elements that you want to search :");
    int iSize = sobj.nextInt();
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
    public int LastOccurance()
    {
     int iCnt = 0;
     int iPos = -1;
     int iNo = 0;
     for(iCnt = Arr.length-1; iCnt >= 0; iCnt--)
     {
        if(Arr[iCnt] == iNo)
        {
            break;
        }
     }
     return iCnt;
   }
}



class Assignment36_3
{
    public static void main(String Arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the number of elements:");
        int iSize = sobj.nextInt();

      MyArray mobj = new MyArray(iSize);
      mobj.Accept();
      mobj.Display();

      int iRet = mobj.LastOccurance();

      if(iRet == -1)
      {
        System.out.println("There is no such elements");
      }
      else
      {
        System.out.println("Last occurance index is "+iSize +iRet);
      }
    }
}