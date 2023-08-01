/*
 write a java program which accept array of character from user and and accept one character.return occurance of that character without considering
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
    
    public int Search(int iNo)
    { 
        int iCnt = 0;
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


 class Assignment44_3
 {
  public static void main(String Arg[])
  {
    Scanner sobj = new Scanner(System.in);
     
    System.out.println("Enter number of elements:");
    int iNo = sobj.nextInt();

     System.out.println("Enter the element that you want to search :");
      int iValue = sobj.nextInt(); 
     
    MyArray mobj = new MyArray(iNo);
    mobj.Accept();
    mobj.Display();
    int iRet = mobj.Search(iValue);
    
    if(iRet == -1)
    {
        System.out.println("There is no such elements :");
    }
    else
    {
    System.out.println("Occured at index :"+iValue +iRet);
    }
  
 }
}