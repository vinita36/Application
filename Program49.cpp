// reverse number with updator
#include<iostream>
using namespace std;

class Digit
{
    private:
    int iNo;
    public:
    Digit(int X)
    {
        iNo = X;
    }

    int ReverseNumber()
    {
        int iTemp = iNo;
        int iDigit = 0;
        int iReverse = 0;
        if(iTemp < 0)
        {
            iTemp = -iTemp;
        }

        while(iTemp != 0)
        {
            iDigit = iTemp % 10;
           iReverse = (iReverse*10) +iDigit;
           iTemp = iTemp / 10;
        }
        return iReverse;
    }
};

int main()
{
    int iValue = 0;
    int iRet = 0;

    cout<<"Enter number:"<<"\n";
    cin>>iValue;

    Digit dobj(iValue);
    iRet = dobj.ReverseNumber();
    cout<<"Reverse number are:"<<iRet<<"\n";
    return 0;
}