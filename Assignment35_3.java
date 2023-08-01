//write a program which accept from user and return the count of digits in between 3 and 7

import java.util.*;

class Digits
{
    public int CountDigit(int iNo)
    {
        int iCount = 0;
        int iDigit = 0;

         if(iNo < 0)
        {
            iNo = -iNo;
        }

        while(iNo != 0)
        {
            iDigit = iNo % 10;
            if((iDigit > 3) && (iDigit < 7))
            {
                iCount++;
            }
            iNo = iNo / 10;
        }
      return iCount;
    }
}

class Assignment35_3
{
    public static void main(String Arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the digits :");
        int iNo = sobj.nextInt();

        Digits dobj = new Digits();

        int iRet = dobj.CountDigit(iNo);
        System.out.println("Digits are :"+iRet);
    }
}