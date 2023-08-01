#include<iostream>
using namespace std;

class DisplayFactor
{
    public:
    int iNo;

    DisplayFactor(int X)
    {
         iNo = X;
    }

  int Factor()
  {
    int iCnt = 0;

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        cout<<iCnt<<"\n";
    }
  }

};

int main()
{
    int iValue = 0;
     cout<<"Enter number:"<<"\n";
     cin>>iValue;

     DisplayFactor dobj(iValue);
     dobj.Factor();

     return 0;
}