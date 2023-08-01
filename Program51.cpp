// float digit average
#include<iostream>
using namespace std;

class Digit
{
    public:
    int iNo;
    Digit(int X)
    {
        iNo = X;
    }

    int DigitAverage()
    {
        int iDigit = 0;
        int iTemp = iNo;
        int iSum = 0;
        int iCount = 0;
        while(iTemp != 0)
        {
            iDigit = iTemp % 10;
            iSum = iSum + iDigit;
            iCount++;
            iTemp = iTemp / 10;
        }
        return(float)iSum / (float)iCount;
    }
};

int main()
{
    int iValue = 0;
    float fRet = 0.0f;

    cout<<"Enter number:"<<"\n";
    cin>>iValue;

    Digit dobj(iValue);
    fRet = dobj.DigitAverage();
    
     cout<<"Average of digit are"<<fRet<<"\n";
     return 0;
}