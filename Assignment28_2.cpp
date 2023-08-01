//write a program which accept one number and position from user and off that bit return modified number
#include<iostream>
using namespace std;

typedef unsigned int UINT;

UINT offBit(UINT iNo, UINT iPos)
{
  UINT iMask = 0X00000001;
  UINT iResult = 0;

  iMask = iMask << (iPos-1);

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
    UINT iBit = 0;
 UINT iValue = 0;
    UINT iRet = 0;
    

    cout<<"Enter number :"<<"\n";
    cin>>iValue;
    cout<<"Enter the position :"<<"\n";
    cin>>iBit;

    iRet = offBit(iValue, iBit);
    cout<<"Result is :"<<iRet<<"\n";
    return 0;
}
   