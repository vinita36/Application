// write a program which accept number from user and return multiplication of all digits

  #include<stdio.h>

  int MultDigit(int iNo)
  {
    
    int iDigit = 0;

    if(iNo < 0)

    {
        iNo = -iNo;
    }
    while(iNo != 0)
    {
       iDigit = iNo % 10;
       iNo = iNo * iDigit;
       iNo = iNo /10;

    }
    
  }
  int main() 
  {
    int iValue = 0 ;
    int iRet = 0;

    printf("Enter number:\n");
    scanf("%d",&iValue);

    iRet = MultDigit(iValue);

    printf("%d",iRet);
    return 0;
  }