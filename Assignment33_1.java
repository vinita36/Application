//write a java program which accept string from user and count number of capital character

import java.util.*;

class StringX
{
  public int CountCapital(String str)
  {
    char Arr[] = str.toCharArray();
    int iCount = 0;

    for(int iCnt = 0; iCnt < Arr.length; iCnt++)
    {
        if((Arr[iCnt] > 'A') && (Arr[iCnt] < 'Z'))
        {
            iCount++;
        }
    }
    return iCount;
  }
}

class Assignment33_1
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);
       
        System.out.println("Enter your name:");
        String name = sobj.nextLine();

        StringX obj = new StringX();
     
        int iRet = obj.CountCapital(name);
        System.out.println("Number of all capital charater are :"+iRet);
    }
}