//write a program which accept one number and position from user and toggle that bit, return modified no.
#include<iostream>
using namespace std;

typedef unsigned int UINT;

UINT toggleBit(UINT iNo, UINT iPos)
{
  UINT iMask = 0X00000001;
  UINT iResult = 0;

  iMask = iMask << (iPos-1);

  iResult = iNo ^ iMask;
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

    iRet = toggleBit(iValue, iBit);
    cout<<"Result is :"<<iRet<<"\n";
    return 0;
}
   