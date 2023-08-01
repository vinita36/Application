
 /*
 write a java program which accept string from user and display below pattern
 input: Hello
 output:
 H  
 H  e   
 H  e  l   
 H  e  l  l
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
        int length = str.length(); 
        
        for(int i = 1; i <= length; i++)
        {
            for(int j = 0; j < i; j++)
            {
                System.out.print(str.charAt(j)+" ");
            }
            System.out.println();
        }
        for(int i = length-1; i>= 1; i--)
        {
            for(int j = 0; j < i; j++)
            {
                System.out.print(str.charAt(j)+" ");
            }
            System.out.println();
        }
    }
}
 class Assignment40_5
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