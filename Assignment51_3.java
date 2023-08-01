/*
 write a java program which accept array from user and and display below pattern
 Input: 7846

 Output:   7  8  4  6
           7  8  4  
           7  8  
           7   
 */
import java.util.*;

class Pattern
{
     public void DisplayPattern(int iNo)
    {
        int i = 0;
        
        int temp = iNo;
       while(temp > 0)
       {
        for(i = 1; i <= temp; i++)
       {
          System.out.print((iNo / (int) Math.pow(10,i-1))%10 + " ");
       }
        System.out.println();
        temp--;
       }
   }
       
}
 class Assignment51_3
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