// write a program which checks wether 15th bit is on or off
#include<iostream>
using namespace std;
typedef unsigned int UINT;

bool ChkBit(UINT iNo)
{
    UINT iMask = 0X00004000;
    UINT iResult = 0;
   iResult = iNo & iMask;
   if(iResult == iMask)
   {
    return true;
   }
   else
   {
    return false;
   }

}

int main()
{
    UINT iValue = 0;
    bool bRet = false;

    cout<<"Enter number :"<<"\n";
    cin>>iValue;

    bRet = ChkBit(iValue);
    if(bRet == true)
    {
        cout<<"15th bit is ON"<<"\n";
    }
    else
    {
        cout<<"15th bit is OFF"<<"\n";
    }
return 0;
}