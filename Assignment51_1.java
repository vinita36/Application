/*
 write a java program which accept array from user and and display below pattern
 Input: 7846

 Output:  6  4  8  7
          6  4  8  7
          6  4  8  7
          6  4  8  7  
 */
import java.util.*;

class Pattern
{
     public void DisplayPattern(int iNo)
    {
        int i = 0;
        int j = 0;
        String iNoString = String.valueOf(iNo);
        
       for(i = 0; i <= iNoString.length()-1; i++)
       {
        int Digit = Character.getNumericValue(iNoString.charAt(i));
        
        for(j = iNoString.length() -1; j >= 0; j--)
       {
          System.out.print(Character.getNumericValue(iNoString.charAt(j)) + " ");
       }
        System.out.println();
       }
   }
       
}
 class Assignment51_1
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