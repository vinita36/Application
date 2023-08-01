#include<iostream>
using namespace std;
int typedef Bool;
class Perfect
{
  public:
  int iNo;

  Perfect(int X)
  {
    iNo = X;
  }
  Bool CheckPerfect()
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
    if(iNo == iSum)
    {
        return true;
    }
    else
    {
        return false;
    }
  }
};

int main()
{
    int iValue = 0;
    Bool bRet = false;
    cout<<"enter number:"<<"\n";
    cin>>iValue;
    Perfect pobj(iValue);

    bRet = pobj.CheckPerfect();
    if(bRet == true)
    {
      cout<<"It is perfect number"<<"\n";
    }
    else
    {
      cout<<"It is not a perfect number"<<"\n";
    }

    return 0;
}