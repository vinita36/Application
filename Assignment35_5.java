//accept number from user and return differance between summation of even digits and summation of odd digits

import java.util.*;

class Digits
{
    public int Differance(int iNo)
    {
        int iEven = 0;
        int iOdd = 0;
        int iDigit = 0;
        int iDiff = 0;
        
        while(iNo != 0)
        {
            iDigit = iNo % 10;
            if((iNo % 2) == 0)
            {
                iEven = iEven + iDigit;
            }
            else
            {
                iOdd = iOdd + iDigit;
            }
            iNo = iNo / 10;

            iDiff = iEven - iOdd;
        }
        return iDiff;
        
    }
}

class Assignment35_5
{
    public static void main(String Arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the digits:");
        int iNo = sobj.nextInt();

        Digits dobj = new Digits();

        int iRet = dobj.Differance(iNo);
        System.out.println("Differance is :"+iRet);
    }
}