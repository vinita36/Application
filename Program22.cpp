#include<iostream>
using namespace std;
typedef unsigned long int ULONG;
class Factorial
{
    public:
    int iNo;
    Factorial(int X)
    {
        iNo = X;
    }
    ULONG Fact()
    {
        int iCnt = 0;
        ULONG iFact = 1;

        for(iCnt = iNo; iCnt >= 1; iCnt--)
        {
            iFact = iFact * iCnt;
        }
        return iFact;
    }
};

int main()
{
    int iValue = 0;
    ULONG iRet = 0;

    cout<<"Enter number:"<<"\n";
    cin>>iValue;
    Factorial fobj(iValue);
    iRet = fobj.Fact();
    cout<<"Factorial is :"<<iRet<<"\n";

    return 0;
}