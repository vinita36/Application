//writ a prog.which accept one number and position from user and check wether bit at that position is on or off if bit is one return true otherwiswe false
#include<iostream>
using namespace std;

typedef unsigned int UINT;

bool CheckBit(UINT iNo, UINT iPos)
{
UINT iMask = 0X00000001;

UINT iResult = 0;

if((iPos < 1) || (iPos > 32))
{
    cout<<"Invalid Positins"<<"\n";
    return false;
}
iMask = iMask << (iPos - 1);


iResult = iNo & (iMask);
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
    UINT iBit = 0;

    cout<<"Enter number :"<<"\n";
    cin>>iValue;

    cout<<"Enter the bit positon (Range should be 1 to 32)"<<"\n";
    cin>>iBit;
     
    bRet = CheckBit(iValue, iBit);

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