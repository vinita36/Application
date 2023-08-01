/*
 write a java program which accept string from user and display below pattern
 input: Hello
 output:
 H  *  *  *  *
 H  e  *  *  *
 H  e  l  *  *
 H  e  l  l  *
 */
import java.util.*;

class Pattern
{
    public void Display(String str)
    {
        int length = str.length();

       for(int i = 0; i < length; i++)
       {
        for(int j = 0; j < length ; j++)
        {
            if(j <= i)
            {
            System.out.print(str.charAt(j)+" ");
            }
            else
            {
                System.out.print("* ");
            }
        }
        System.out.println();
       }
    }
}
 class Assignment41_1
 {
    public static void main(String Arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.print("Enter the string :");
        String name = sobj.nextLine();

       Pattern pobj = new Pattern();
       pobj.Display(name);
    }
 }