/*
 write a java program which accept array from user and and display below pattern
 Input: 7846

 Output:   7  
           7  8    
           7  8  4 
           7  8  4  6
 */
import java.util.*;

class Pattern
{
     public void DisplayPattern(int iNo)
    {
        int i = 0;
        int j = 0;
        String iNoString = String.valueOf(iNo);
        
        for(i = 0; i < iNoString.length(); i++)
       {
        for(j = 0; j <= i; j++)
        {
          System.out.print(iNoString.charAt(j) + "\t");
        }
        System.out.println();
       }
        System.out.println();
        
       }
   }
       

 class Assignment51_4
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