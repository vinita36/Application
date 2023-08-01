// bFlag
#include<iostream>
using namespace std;
int typedef Bool;

class Number
{
    public:
        int iNo;

    Number(int X)
    
    {
        int iNo = X;
    }

    Bool ChkPrime()
    {
     int iCnt = 0;
     Bool bFlag = true;

     for(iCnt = 2; iCnt <= iNo; iCnt++)
     {
        if((iNo % iCnt) == 0)
        {
            bFlag = false;
            break;
        }
     }
     return bFlag;
    }
};

int main()
{
    int iValue = 0;
    Bool bRet = false;

    cout<<"Enter number"<<"\n";
    cin>>iValue;

    Number nobj(iValue);
    bRet = nobj.ChkPrime();
    if(bRet == true)
    {
        cout<<"it iS prime number"<<"\n";
    }
    else
    {
        cout<<"It is not a prime number"<<"\n";
    }
     return 0;
}