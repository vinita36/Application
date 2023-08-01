/*
 write a java program which accept array of character from user and return differance between frequency of capital and frequency of small character 
 Input: b N j B R b A d G G

 Output: b n j b r b a d g g
 */
import java.util.*;

class TwoArray
{
    public char Arr[];

    public TwoArray(int iSize)
    {
        Arr = new char[iSize];
    }

    public void Accept()
    {
        Scanner sobj = new Scanner(System.in);
        System.out.println("Enter the elements :");
        for(int iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            Arr[iCnt] = sobj.next().charAt(0);
        }
    }
    public void Display()
    {
        System.out.println("Elements of array are:");
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
    
    public int SmallCap()
    {
        int CapCount = 0;
        int SmallCount = 0;
        int iDiff = 0;

       for(int iCnt = 0; iCnt < Arr.length; iCnt++)
       {
        if((Arr[iCnt] > 'a') && (Arr[iCnt] < 'z'))
        {
          CapCount++;
        }
        else if((Arr[iCnt] > 'A') && (Arr[iCnt] < 'Z'))
        {
           SmallCount++;
        }
        iDiff = CapCount - SmallCount;
         
       }
       return iDiff;
    }
  }


 class Assignment44_4
 {
  public static void main(String Arg[])
  {
    Scanner sobj = new Scanner(System.in);
     
    System.out.println("Enter number of elements:");
    int iNo = sobj.nextInt();

    MyArray mobj = new MyArray(iNo);
    mobj.Accept();
    mobj.Display();
    int iRet = mobj.SmallCap();
    System.out.println("Differance is :"+iRet);
  }
 }