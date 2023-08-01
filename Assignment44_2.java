/*
 write a java program which accept array from user and count vowels
 Input: b N e B R b A i G i

 Output: 4
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
    
    public int CountVowels()
    {
        int iCount = 0;
       for(int iCnt = 0; iCnt < Arr.length; iCnt++)
       {
        if((Arr[iCnt] == 'a') || (Arr[iCnt] == 'e') || (Arr[iCnt] == 'i') || (Arr[iCnt] == 'o') || (Arr[iCnt] == 'u')
        || (Arr[iCnt] == 'A') || (Arr[iCnt] == 'E') || (Arr[iCnt] == 'I') || (Arr[iCnt] == 'O') || (Arr[iCnt]) == 'U')
        {
          iCount++;
        }
         
       }
       return iCount;
    }
  }


 class Assignment44_2
 {
  public static void main(String Arg[])
  {
    Scanner sobj = new Scanner(System.in);
     
    System.out.println("Enter number of elements:");
    int iNo = sobj.nextInt();

    MyArray mobj = new MyArray(iNo);
    mobj.Accept();
    mobj.Display();
    int iRet = mobj.CountVowels();
    System.out.println("Number of Vowels are :"+iRet);
  }
 }