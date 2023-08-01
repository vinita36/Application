/*
 write a java program which accept array from user and replace each capita charactr with its corresponding small character
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
    
    public void ArrayReplace()
    {
        
       for(int iCnt = 0; iCnt < Arr.length; iCnt++)
       {
        if(character.isUpperCase(Arr[iCnt]))
        {
          Arr[iCnt] = (character.toLowerCase)Arr[iCnt];
        }
        System.out.println("Replace character is :");
       }
       String modifiedString = String.valueOf(Arr);
       System.out.println("Modified string :"+modifiedString);
    }
  }


 class Assignment44_1
 {
  public static void main(String Arg[])
  {
    Scanner sobj = new Scanner(System.in);
     
    System.out.println("Enter number of elements:");
    int iNo = sobj.nextInt();

    MyArray mobj = new MyArray(iNo);
    mobj.Accept();
    mobj.Display();
    mobj.ArrayReplace();
  }
 }