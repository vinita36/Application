#include<iostream>
using namespace std;
int typedef Bool; 
class Number
{
  public:
  int iNo;

  Number(int X)
  {
    iNo = X;
  }
  Bool ChkDivisible()
  {
    int iCnt = 0;

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if(((iNo % 3) == 0) && (iNo % 5) == 0)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
  }
};

int main()
{
    int iValue = 0;
    Bool bRet = false;

    cout<<"Enter number:"<<"\n";
    cin>>iValue;
    Number nobj(iValue);

    bRet = nobj.ChkDivisible();
    if(bRet == true)
    {
        cout<<"Completely divisible by 3 & 5"<<"\n";
    }
    else
    {
        cout<<"not completely divisible by 3 & 5"<<"\n";
    }
    return 0;

}