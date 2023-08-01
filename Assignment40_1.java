/*
 write a java program which accept string from user and display below pattern
 input: Hello
 output:
 H  e  l  l  o
 H  e  l  l  o
 H  e  l  l  o
 H  e  l  l  o
 */
import java.util.*;

class Pattern
{
    public void Display(String str)
    {
       for(int i = 0; i < 4; i++)
       {
        for(int j = 0; j < str.length(); j++)
        {
            System.out.print(str.charAt(j)+" ");
        }
        System.out.println();
       }
    }
}
 class Assignment40_1
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