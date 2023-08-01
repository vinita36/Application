/*
 write a java program which accept array from user and and display below pattern
 Input: 7846

 Output:   7  8  4  6
           7  8  4  6
           7  8  4  6
           7  8  4  6 
 */
import java.util.*;

class Pattern
{
     public void DisplayPattern(int iNo)
    {
        int i = 0;
        int j = 0;
        
        String iNoString = Integer.toString(iNo);
        int length = iNoString.length();
        
       for(i = 0; i < length; i++)
       {
        for(j = 0; j < length; j++)
       {
          System.out.print(iNoString.charAt(j) + " ");
       }
        System.out.println();
       }
   }
       
}
 class Assignment51_2
 {
  public static void main(String Arg[])
  {
    Scanner sobj = new Scanner(System.in);
     
    System.out.println("Enter the number:");
    int iNo = sobj.nextInt();

    Pattern pobj = new Pattern();
    
    pobj.DisplayPattern(iNo);
  }
 }