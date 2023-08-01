#include<iostream>
using namespace std;
int typedef Bool;

class Prime
{
    public:
    int iNo;

    Prime(int X)
    {
        iNo = X;
    }
    Bool ChkPrime()
    {
        int iCnt = 0;
        for(iCnt = 2; iCnt <= iNo; iCnt++)
        {
            if((iNo % iCnt) == 0)
            {
                break;
            }
        }
        if(iCnt == iNo+1)
        {
            return true;
        }
        else
         {
            return false;
         }

    }

};

int main()
{
    int iValue = 0;
    Bool bRet = false;
    cout<<"Enter number:"<<"\n";
    cin>>iValue;

    Prime pobj(iValue);

    bRet = pobj.ChkPrime();
    if(bRet == true)
    {
        cout<<"It is a prime number"<<"\n";
    }
    else
    {
        cout<<"it is not a prime number"<<"\n";
    }

    return 0;


}