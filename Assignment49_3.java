/*
 write a java program which accept array from user and and display below pattern
 Input: 7846

 Output: 1  2  3  4  5  6  7
         1  2  3  4  5  6  7  8
         1  2  3  4
         1  2  3  4  5  6
         
 */
import java.util.*;

class Pattern
{
     public void DisplayPattern(int iNo)
    {
        int i = 0;
        int j = 0;
        
       for(i = 1; i <= iNo ; i++)
       {
        for(j = 1; j < i; j++)
       {
         System.out.print(j+" ");
        }
        
       }
       System.out.println();
    }
}
 class Assignment49_3
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