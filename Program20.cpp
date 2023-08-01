#include<iostream>
using namespace std;

class Factorial
{
    public:
    int iNo;

    Factorial(int X)
    {
      iNo = X;
    }

    int Fact()
    {
        int iCnt = 0;
        int iFact = 1;
        for(iCnt = 1; iCnt <= iNo; iCnt++)
        {
            iFact = iFact * iCnt;
        }
        return iFact;
    }

};

int main()
{
    int iValue = 0;
    int iRet = 0;
    cout<<"Enter number:"<<"\n";
    cin>>iValue;

    Factorial fobj(iValue);
    iRet = fobj.Fact();

    cout<<"Factorial is:"<<iRet<<"\n";
    return 0;
}