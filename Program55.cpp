//maximum number
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
    
    int MinimumDigit()
    {
        int iDigit = 0;
        int iTemp = iNo;
        int iMax = 0;
        while(iTemp != 0)
        {
            iDigit = iTemp % 10;
            if(iDigit > iMax)
            {
                iMax = iDigit;
            }
            if(iMax == 9)
            {
                break;
            }
            iTemp = iTemp / 10;
        }
        return iMax;
    }
};

int main()
{
    int iValue = 0;
    int iRet = 0;

    cout<<"Enter number:"<<"\n";
    cin>>iValue;

    Digit dobj(iValue);
    iRet = dobj.MinimumDigit();
    cout<<"Largest digit are:"<<iRet<<"\n";
    return 0;
}