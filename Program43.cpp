// count digit frequency
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
        int iCnt = 0;
        int iDigit = 0;

        while(iTemp != 0)
        {
            iDigit = iTemp % 10;
            if(iDigit == 8)
            {
                iCnt++;
            }
            iTemp = iTemp / 10;
        }
        return iCnt;
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