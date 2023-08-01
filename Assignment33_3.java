//write a java program which accept string from user and return differance between frequency of small character and frequency of capital character

import java.util.*;

class StringX
{
    public int Differance(String str)
    {
        char Arr[] = str.toCharArray();
      int SmallCount = 0;
      int CapCount = 0;
      int Diff = 0;

      for(int iCnt = 0; iCnt < Arr.length; iCnt++)
      {
        if((Arr[iCnt] > 'a') && (Arr[iCnt] < 'z'))
        {
            SmallCount++;
        }
        else if((Arr[iCnt] > 'A') && (Arr[iCnt] > 'Z'))
        {
            CapCount++;
        }
        Diff = SmallCount - CapCount;
      }
     return Diff;      

    }
}

class Assignment33_3
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter your name:");
        String name = sobj.nextLine();

        StringX obj = new StringX();
       
        int iRet = obj.Differance(name);
        System.out.println("Differance is :"+iRet);
    }
}