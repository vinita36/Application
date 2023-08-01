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
    int Factor()
    {
        int iCnt = 0;
        int iFact = 1;
        iCnt = 1;
        while(iCnt <= iNo)
        {
            iFact = iFact * iCnt;
            iCnt++;
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
    iRet = fobj.Factor();
  cout<<"Factorial is:"<<iRet<<"\n";
  return 0;
}