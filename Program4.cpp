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
       
        if(iNo < 0)
        {
          iNo = -iNo;    
        }
        for(iCnt = 1; iCnt <= iNo; iCnt++);
        {
            if((iNo % iCnt) == 0)
            {
                cout<<iCnt<<"\n";
            }
        }
        
    }
   
};

int main()
{
    int iValue = 0;
    int iRet = 0;
    cout<<"Enter number:"<<"\n";
    cin>>iValue;

   DisplayFactor dobj(iValue);
    iRet = dobj.Factor();
  cout<<"factor is:"<<iRet<<"\n";
   return 0;
}