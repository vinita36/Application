/*
 write a java program which accept array from user and and display below pattern
 Input: 7846

 Output: *  *  *  *  *  *    
         *  *  *  *   
         *  *  *  *  *  *  *  *
         *  *  *  *  *  *  *
         
 */
import java.util.*;

class Pattern
{
     public void DisplayPattern(int iNo)
    {
        int iCnt = 0;
        while(iNo > 0)
        {
       for(iCnt = iNo%10; iCnt >= 0; iCnt--)
       {
         System.out.print("*"+" ");
        }
        System.out.println();
        iNo = iNo / 10;
       }
    }
      
    }
  


 class Assignment49_2
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