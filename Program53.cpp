//minimum digit

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
        int iTemp = iNo;
        int iDigit = 0;
        int iMin = 9;
        while(iTemp != 0)
        {
            iDigit = iTemp % 10;
            if(iDigit < iMin)
            {
              iMin = iDigit;
            } 
            if(iMin == 0)
            
            {
                break;
            }
            iTemp = iTemp / 10;
        }
        return iMin;
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

    cout<<"Smallest number is"<<iRet<<"\n";
    return 0;
}