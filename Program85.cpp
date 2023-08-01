//Input : 5
//output: 1  2  3  4  5   4  3  2  1
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
        
        for(iCnt = 1; iCnt <= iNo; iCnt++)
        {
            cout<<iCnt<<"\t";
            
        }
        for(iCnt = iNo-1; iCnt >= 1; iCnt--)
        {
            cout<<iCnt<<"\t";
            
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