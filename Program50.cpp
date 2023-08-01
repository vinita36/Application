// chk pallindrome
#include<iostream>
using namespace std;
int typedef Bool;

class Digit
{
    private:
    int iNo;

    public:
    Digit(int X)
    {
        iNo = X;
    }

    Bool ChkPallindrome()
    {
        int iDigit = 0;
        int iTemp = iNo;
        int iReverse = 0;

        while(iTemp != 0)
        {
            iDigit = iTemp % 10;
            iReverse = (iReverse * 10)+iDigit;
             iTemp = iTemp / 10;
        }
        if(iReverse == iTemp)
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

    Digit dobj(iValue);
    bRet = dobj.ChkPallindrome();
    if(bRet == true)
    {
        cout<<"It is pallindrome number"<<"\n";
    }
    else
    {
        cout<<"It is not a pallindrome number"<<"\n";
    }
    return 0;
}