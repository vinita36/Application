// write aprogram which accept number from user and return differance between summetion of even  digits and summation of odd digits  
  

  #include<stdio.h>
  int CountDiff(int iNo)
  {
    int ieven = 0;
    int iodd = 0;
    int iDigit = 0;

    if(iNo < 0)

    {
        iNo = -iNo;
    }
    while(iNo != 0)
    {
       iDigit = iNo % 10;
       if((iDigit % 2) == 0) 
       {
        ieven = ieven + iDigit;
       }
       else 
       {
        iodd = iodd + iDigit;
       }
       iNo = iNo /10;

    }
      int differance = ieven - iodd;  
  }
  int main()
  {
    int iValue = 0 ;
    int iRet = 0;

    printf("Enter number:\n");
    scanf("%d",&iValue);

    iRet = CountDiff(iValue);

    printf("%d",iRet);
    return 0;
  }