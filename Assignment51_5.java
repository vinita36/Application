/*
 write a java program which accept array from user and and display below pattern
 Input: 7846

 Output:   6 
           6  4    
           6  4  8 
           6  4  8  7
 */
import java.util.*;

class Pattern
{
     public void DisplayPattern(int iNo)
    {
        int i = 0;
        int j = 0;
        String iNoStr = String.valueOf(iNo);
        int length = iNoStr.length();
        
        for(i = 0; i < length; i++)
       {
        for(j = 0; j <= i; j++)
        {
           System.out.print(iNoStr.charAt(j) + " ");
        }
        System.out.println();
       }
        System.out.println();
        
       }
       
       
   }
 class Assignment51_5
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