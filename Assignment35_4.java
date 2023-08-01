//write a program which accept number from user and return multiplication of all digits

import java.util.*;

class Digits
{
    public int Multiplication(int iNo)
    {
        int iDigit = 0;
        int iMul = 1;

        while(iNo != 0)
        {
            iDigit = iNo % 10;
            iMul = iMul * iDigit;
            iNo = iNo / 10;
        }
        return iMul;
    }
}

class Assignment35_4
{
    public static void main(String Arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the digits:");
        int iNo = sobj.nextInt();

        Digits dobj = new Digits();
        int iRet = dobj.Multiplication(iNo);

        System.out.println("Multipication of all digits are :"+iRet);
    }
}