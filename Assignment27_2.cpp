// write a program which accept one number from user and off 7th and 10th bit of that number if it is on. return modified number
#include<iostream>
using namespace std;

typedef unsigned int UINT;

UINT offBit(UINT iNo)
{
  UINT iMask = 0X00000240;
  UINT iResult = 0;

  iResult = iNo & iMask;
  if(iResult == iMask)
  {
    return (iNo ^ iMask);
  }
  else
  {
    return iNo;
  }
  return iResult;

}

int main()
{

    UINT iValue = 0;
    UINT iRet = 0;
    

    cout<<"Enter number :"<<"\n";
    cin>>iValue;

    iRet = offBit(iValue);
    cout<<"Result is :"<<iRet<<"\n";
    return 0;
}