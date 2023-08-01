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
        int iCnt = 0;
        int iSum = 0;

        for(iCnt = 1; iCnt <= iNo; iCnt++)
        {
            if((iNo % iCnt) == 0)
            {
                iSum = iSum + iCnt;
            }
        }
        return iSum;
    }
    
};

int main()
{
    int iValue = 0;
    int iRet = 0;

    cout<<"enter number:"<<"\n";
    cin>>iValue;

    SumFactor sobj(iValue);
    iRet = sobj.Factor();

    cout<<"Summation of factor is:"<<iRet<<"\n";

return 0;

}