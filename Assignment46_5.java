/*
 write a java program which accept marks of N student from user and display class of each student

 Less than 35 - Fail
 less than 50 - Pass
 less than 60 - second class
 less than 70 - first class
 Greater than 70 - First class with distinction
 */
import java.util.*;

class StudentX
{
   public void Percentage(float fMarks)
   {
    if((fMarks < 0.0f) || (fMarks > 100.00f))
    {
        System.out.println("Invalid input :");
        return;
    }
    
      if((fMarks >= 0.0f) && (fMarks < 35.00f ))
      {
        System.out.println("You are fail :");
      }
      else if((fMarks >= 35.00f) && (fMarks < 50.00f ))
      {
        System.out.println("You are Pass :");
      }
      else if((fMarks >= 50.00f) && (fMarks < 60.00f ))
      {
        System.out.println("You are second class :");
      }
      else if((fMarks >= 60.00f) && (fMarks < 70.00f))
      {
        System.out.println("You are first class :");
      }
      else if((fMarks >= 70) && (fMarks < 100))
      {
        System.out.println("You are first class with distinction :");
      }
   }
}
 class Assignment46_5
 {
    public static void main(String Arg[])
    {
        Scanner sobj = new Scanner(System.in);
        float fNo = 0.0f;

        System.out.println("Please enter your percentage :");
         fNo = sobj.nextFloat();

        StudentX obj = new StudentX();
        obj.Percentage(fNo);
    }
 }