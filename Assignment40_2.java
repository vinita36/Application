
 /*
 write a java program which accept string from user and display below pattern
 input: Hello
 output:
 H  e  l  l  o
 H  e  l  l  
 H  e  l  
 H  e
 H
 */
import java.util.*;

class Pattern
{
    public void Display(String str)
    {
        int i = 0; 
        int j = 0;
        int length = str.length();

        for(i = length; i >= 0; i--)
        {
            for(j = 0; j < i; j++)
            {
                System.out.print(str.charAt(j));
            }
            System.out.println();
        }
    }
}
 class Assignment40_2
 {
    public static void main(String Arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the string :");
        String name = sobj.nextLine();

        Pattern pobj = new Pattern();
        pobj.Display(name);
    }
 }