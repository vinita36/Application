//chk digit
#include<iostream>
using namespace std;
int typedef Bool;

class Digit
{
    private:
    int iNo;
    int iSearch;
    public:
    Digit(int X, int Y)
    {
        iNo = X;
        iSearch = Y;
    }

    Bool ChkDigit()
    {
        int iTemp = iNo;
        int iDigit = 0;
        if((iSearch < 0) || (iSearch > 9))
        {
            cout<<"Enter number 0 to 9 range"<<"\n";
            return 0;
        }
        while(iTemp != 0)
        {
            iDigit = iTemp % 10;
            if(iDigit == iSearch)
            {
                break;
            }
            iTemp = iTemp / 10;
        } 
        if(iDigit == iSearch)
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
    int iValue1 = 0, iValue2= 0;
    Bool bRet = false;

    cout<<"Enter number"<<"\n";
    cin>>iValue1;

    cout<<"Enter number o to 9 range:"<<"\n";
    cin>>iValue2;

    Digit dobj(iValue1, iValue2);
    bRet = dobj.ChkDigit();
    if(bRet == true)
    {
        cout<<"Digit are present"<<"\n";
    }
    else
    {
        cout<<"Digit are not present"<<"\n";
    }
    return 0;
}