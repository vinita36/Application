//write a program which accept one number from user and toggle 7th bit of that number return modified number

 #include<iostream>
using namespace std;

typedef unsigned int UINT;

UINT toggleBit(UINT iNo)
{
  UINT iMask = 0X00000040;
  UINT iResult = 0;

  iResult = iNo ^ iMask;
  return iResult;

}

int main()
{

    UINT iValue = 0;
    UINT iRet = 0;
    

    cout<<"Enter number :"<<"\n";
    cin>>iValue;

    iRet = toggleBit(iValue);
    cout<<"Result is :"<<iRet<<"\n";
    return 0;
}