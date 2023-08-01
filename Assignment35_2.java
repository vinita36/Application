// write a java program to accept number from user and return the count of odd digits

import java.util.*;

class Digits
{
    public int CountOdd(int iNo)
    {
    int iCount = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }
    
    while(iNo != 0)
    {
        if((iNo % 2) != 0)
        {
            iCount++;
        }
        iNo = iNo / 10;
    }
    return iCount;

    }
}

class Assignment35_2
{
    public static void main(String Arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the digits :");
        int iNo = sobj.nextInt();

        Digits dobj = new Digits();
        int iRet = dobj.CountOdd(iNo);

        System.out.println("Odd digits are :"+iRet);
    }
}