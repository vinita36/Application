// accept string from user and display it in reverse order

import java.util.*;

class StringX{
    public String Reverse(String str)
    {
        char Arr[] = str.toCharArray();

        int iEnd = Arr.length-1;
        int iStart = 0;

        char cTemp = ' ';

        while(iStart < iEnd)
        {
            cTemp = Arr[iStart];
            Arr[iStart] = Arr[iEnd];
            Arr[iEnd] = cTemp;

            iStart++;

            iEnd--;
        }
        return new String(Arr);

    }
}

class Assignment33_5
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter your name :");
        String name = sobj.nextLine();

        StringX obj = new StringX();

        String sRet = obj.Reverse(name);

        System.out.println("Reverse string is :"+sRet);
    }
}