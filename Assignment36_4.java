//accept N number from user and and accept range, display all elements from that range
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

        System.out.println("Enter the elemnets");
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

    public void DisplayRange()
    {
        int iStart = 0;
        int iEnd = 0;
        int iCnt = 0;
 

        for(iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            if((Arr[iCnt] >= iStart) && (Arr[iCnt] <= iEnd))
            {
                System.out.println(Arr[iCnt]);
            }
        }
    }
}
class Assignment36_4
{
    public static void main(String Arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter thenumber of elements");
        int iSize = sobj.nextInt();

       System.out.println("Enter the range start:");
       int iStart = sobj.nextInt();

       System.out.println("Enter the range end");
       int iEnd = sobj.nextInt();

       MyArray mobj = new MyArray(iSize);
       mobj.Accept();
       mobj.Display();

        mobj.DisplayRange();
       System.out.println("Number within the range "+ iStart +" - " + iEnd + ":");
    }
}