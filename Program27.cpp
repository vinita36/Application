#include<iostream>
using namespace std;

class BasePower
{
    public:
    int iNo1;
    int iNo2;

    BasePower(int X, int Y)
    {
        iNo1 = X;
        iNo2 = Y;
    }
    int Calculate()
    {
        int iCnt = 0;
        int iResult = 1;

        iCnt = 1;
        while(iCnt <= iNo2)
        {
            iResult = iResult * iNo1;
            iCnt++;
        }
        return iResult;
    }
};

int main()
{
    int iValue1 = 0;
     int iValue2 = 0;
    int iRet = 0;

    cout<<"Enter Base:"<<"\n";
    cin>>iValue1;

    cout<<"Enter power:"<<"\n";
    cin>>iValue2;

    BasePower bobj(iValue1, iValue2);
    iRet = bobj.Calculate();

    cout<<"Result is:"<<iRet<<"\n";

    return 0;
}