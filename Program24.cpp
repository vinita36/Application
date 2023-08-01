//While condition

#include<iostream>
using namespace std;

class DisplayF
{
    public:
    int iNo;

    DisplayF(int X)
    {
        iNo = X;
    }
    int Factor()
    {
        int iCnt = 0;

        iCnt = 1;
        while(iCnt <= iNo)
        {
            cout<<iCnt<<"\n";
            iCnt++;
        }
    }
};

int main()
{
    int iValue = 0;
    cout<<"Enter number:"<<"\n";
    cin>>iValue;
    DisplayF dobj(iValue);
    dobj.Factor();
      
    return 0;
}