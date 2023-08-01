#include<iostream>
using namespace std;

class Number
{
  public:
  int iNo1;
  int iNo2;

  Number(int X, int Y)
  {
    iNo1 = X;
    iNo2 = Y;
  }

  int Addition()
  {
    
    int iResult = 0;
    iResult = iNo1 + iNo2;
    return iResult;
  }
};

int main()
{
    int iValue1 = 0, iValue2 = 0;
    int iRet = 0;
    cout<<"Enter first number:"<<"\n";
    cin>>iValue1;

    cout<<"Enter second number:"<<"\n";
    cin>>iValue2;
    
    Number nobj(iValue1, iValue2);
    iRet = nobj.Addition();

    cout<<"Addition is:"<<iRet<<"\n";
    return 0;
}