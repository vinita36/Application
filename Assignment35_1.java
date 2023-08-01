// write a program whic accept number from user and return the count of even digit

import java.util.*;

class Digits
{
    public int CountEven(int iNo)
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

            if((iNo % 2) == 0)
            {
                iCount++;
            }
            iNo = iNo /10;
        }
        return iCount;
    }
}

class Assignment35_1
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the digit :");
        int iNo = sobj.nextInt();

        Digits dobj = new Digits();
        int iRet = dobj.CountEven(iNo);

        System.out.println("Even digits are:"+iRet);
    }
}