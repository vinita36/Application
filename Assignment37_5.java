// check wether the string is pallindrome or not without considering its case
import java.util.*;

class StringDemo
{
    public boolean ChkPallindrome(String str)
    {
       char Arr[] = str.toCharArray();

       char Start = 0;
       char End = 0;

        for(int iCnt = 0; iCnt < Arr.length; iCnt++)
       {
        if(Start != End)
        {
             break;
        }
       }
     if(Start == End)
     {
        return true;
     }  
     else
     {
        return false;
     }
    }
}
class Assignment37_5
{
    public static void main(String Arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the string");
        String name = sobj.nextLine();

        StringDemo obj = new StringDemo();
        boolean bRet = obj.ChkPallindrome(name);

        if(bRet == true)
        {
            System.out.println("String is pallindrome");
        }
        else
        {
            System.out.println("String is not Pallindrome");
        }

    }
}