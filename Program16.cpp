#include<iostream>
using namespace std;

class Base
{
    public:
    int iNo1;
    int iNo2;

    Base(int X, int Y)
    {
        iNo1 = X;
        iNo2 = Y;
    }

    unsigned long int BasePower()
    {
      int iCnt = 0;
      unsigned long int iResult = 1;

      for(iCnt = 1; iCnt <= iNo2; iCnt++)
      {
        iResult = iResult * iNo1;
      }
      return iResult;
    }
};

int main()
{
    int iValue1 = 0;
    int iValue2 = 0;
    unsigned long int iRet = 0;

    cout<<"Enter base"<<"\n";
    cin>>iValue1;

    cout<<"Enter power"<<"\n";
    cin>>iValue2;
   Base bobj(iValue1, iValue2);
   iRet = bobj.BasePower();

   cout<<"Result is:"<<iRet<<"\n";
   return 0;

}
