//Input : 7
//output: 7  *  6  *  5  *  4  *  3  *  2  *  1  *
#include<iostream>
using namespace std;

class Pattern
{
    private:
    int iNo;

    public:
    Pattern(int X)
    {
        iNo = X;
    }

    void Display()
    {
        int iCnt = 0;
        for(iCnt = iNo; iCnt >= 1; iCnt--)
        {
            cout<<iCnt<<"\t"<<"*"<<"\t";
        }
        cout<<"\n";
    }

};

int main()
{
    int iFrequency = 0;

    cout<<"Enter number of Frequency:"<<"\n";
    cin>>iFrequency;

    Pattern pobj(iFrequency);
    pobj.Display();
    return 0;
}