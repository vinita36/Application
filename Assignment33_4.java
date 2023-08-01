// accept string from user and check wether it contains vowels in it or not

import java.util.*;

class StringX
{
    public boolean ChkVowels(String str)
    {
        char ch = str.charAt();

        for(int iCnt = 0; iCnt < str.length; iCnt++)
        {
            if((ch == 'a') || (ch == 'e') || (ch == 'i')|| (ch == 'o') || (ch == 'u') 
            || (ch == 'A') || (ch == 'E') || (ch == 'I') ||(ch == 'O') || (ch == 'U'))
            {
                return true;
            }
            else
            {
                return false;
            }
        }

    }
}

class Assignment33_4
{
    public static void main(String arg[])
    {
      Scanner sobj = new Scanner(System.in);
      
      System.out.println("Enter your name :");
      String name = sobj.nextLine();

      StringX obj = new StringX();
      boolean bRet = obj.ChkVowels(name);

      if(bRet == true)
      {
        System.out.println("It contains vowels ");
      }
      else
      {
        System.out.println("It contains no vowels ");
      }
    }
}   