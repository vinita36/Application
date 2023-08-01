// Accept string from user and reverse the contents of string by toggling the case

import java.util.*;

class StringX
{
    public String RevTogg(String str)
    {
       char Arr[] = str.toCharArray();

       int iStart = 0;
       int iEnd = Arr.length-1;
       char cTemp = ' ';

       for(int iCnt = 0; iCnt < Arr.length; iCnt++)
       {
        cTemp = Arr[iStart];
        Arr[iStart] = Arr[iEnd];
        Arr[iEnd] = cTemp;

        iStart++;
        iEnd--;
       }

       for(int iCnt = 0; iCnt < Arr.length; iCnt++)
        {
       if((Arr[iCnt] >= 'a') && (Arr[iCnt] <= 'z'))
            {
                Arr[iCnt] = (char)(Arr[iCnt]-32);
            }
            else if((Arr[iCnt] >= 'A') && (Arr[iCnt] <= 'Z'))
            {
                Arr[iCnt] = (char)(Arr[iCnt] + 32);
            }
        }

       return new String(Arr);

    }

}

class Assignment37_4
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("enter string");
        String name = sobj.nextLine();

       StringX obj = new StringX();
        String sRet = obj.RevTogg(name);
        System.out.println("String is:"+sRet);
     }
}