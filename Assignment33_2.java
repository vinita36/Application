// write a java program which accept string from user and count number of small character

import java.util.*;

class StringX{
    public int CountSmall(String str)
    {
        char Arr[] = str.toCharArray();
        int iCount = 0;

        for(int iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            if((Arr[iCnt] > 'a') && (Arr[iCnt] < 'z'))
            {
                iCount++;
            }
        }
        return iCount;
    }
}

class Assignment33_2
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter your name :");
        String name = sobj.nextLine();

        StringX obj = new StringX();
        int iRet = obj.CountSmall(name);

        System.out.println("Number of all small character are :"+iRet);
    }
}