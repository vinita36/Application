// count digit frequency with updator
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

    int CountDigit()
    {
        int iTemp = iNo;
        int iCount = 0;
        int iDigit = 0;
        if(iTemp < 0)
        {
            iTemp = -iTemp;
        }

        while(iTemp != 0)
        {
            iDigit = iTemp % 10;
            if(iDigit == 8)
            {
                iCount++;
            }
            iTemp = iTemp / 10;
        }
        return iCount;
    }
};

int main()
{
    int iValue = 0;
    int iRet = 0;

    cout<<"Enter number:"<<"\n";
    cin>>iValue;

    Digit dobj(iValue);
    iRet = dobj.CountDigit();

    cout<<"Digit frequency are :"<<iRet<<"\n";
    return 0;
    
}