/*
 write a java program which accept string from user and display below pattern
 input: Hello
 output:
 H  e  l  l  o
 H  e  l  l  *
 H  e  l  *  *
 H  e  *  *  *
 H  *  *  *  *
 H  e  *  *  *
 H  e  l  *  *
 H  e  l  l  *
 H  e  l  l  o
 */
import java.util.*;

class Pattern
{
    public void Display(String str)
    {
        int length = str.length();

         for(int i = length; i > 1; i--)
       {
        for(int j = 0; j < i ; j++)
        {
            System.out.print(str.charAt(j)+" ");
        }   
        for(int k = 0; k < length-i; k++)
            {
                System.out.print("* ");
            }
        
        System.out.println();
       }
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
 class Assignment41_4
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