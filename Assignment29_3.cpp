// write a program which accept one number from user and check wether 9th and 12th bit is on or off
#include<iostream>
using namespace std;

typedef unsigned int UINT;

bool CheckBit(UINT iNo)
{
UINT iMask = 0X900;
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

    bRet = CheckBit(iValue);

    if(bRet == true)
    {
        cout<<"true"<<"\n";
    }
    else
    {
        cout<<"false"<<"\n";
    }
    return 0;
}