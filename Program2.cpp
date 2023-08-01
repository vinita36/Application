//with updator

#include<iostream>
using namespace std;

class Display
{
    public:
    int iNo;

    Display(int X)
    {
        iNo = X;
    }
    int Frequency()
    {
        int iCnt = 0;
        if(iNo < 0)
        {
            iNo = -iNo;        
        }
        for(iCnt = 1; iCnt <= iNo; iCnt++)
        {
            cout<<iCnt<<"\n";
        }
    }

};

int main()
{
    int iValue = 0;

    cout<<"Enter frequency:"<<"\n";
    cin>>iValue;

    Display dobj(iValue);
    dobj.Frequency();
    return 0;
}