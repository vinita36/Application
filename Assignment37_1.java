//write a program which 2 strings from user and check wether contents of two strings are eual or not

import java.util.*;

class StringDemo
{

public boolean StrCmpX(String src, String dest)
{
  char Arr[] = src.toCharArray();
  char Brr[] = dest.toCharArray();


  int iCnt = 0;
for(iCnt = 0; iCnt < Arr.length; iCnt++)
{
    if(Arr[iCnt] != Brr[iCnt])
    {
        break;
    }
}
if(Arr[iCnt] == Brr[iCnt])
{
    return true;
}
else
{
    return false;
}
}
}

class Assignment37_1
{
    public static void main(String Arg[])
    {
      Scanner sobj = new Scanner(System.in);

      System.out.println("Enter first String :");

      String name1 = sobj.nextLine();

      System.out.println("Enter second String :");
       String name2 = sobj.nextLine();

     StringDemo obj = new StringDemo();

     boolean bRet = obj.StrCmpX(name1, name2);

     if(bRet == true)
     {
        System.out.println("String are equal");
     }
     else
     {
        System.out.println("String are not equal");
     }
    }
}