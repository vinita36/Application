#include<iostream>
using namespace std;

class SumFactor
{
    public:
    int iNo;

    SumFactor(int X)
    {
        iNo = X;
    }

    int Factor()
    {
        int Sum = 0;
        int iCnt = 0;
        for(iCnt = 1; iCnt <= iNo; iCnt++)
        {
            Sum = Sum + iCnt;
        }
        return Sum;
    }

};

int main()
{
    int iValue = 0;
    int iRet = 0;

    cout<<"Enter number:"<<"\n";
    cin>>iValue;
     SumFactor sobj = (iValue);
     iRet = sobj.Factor();

     cout<<"summetion of factor is :"<<iRet<<"\n";
     return 0;
}