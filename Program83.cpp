//Input : 7
//output: 2  4  6  8  10  12  14
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
            cout<<iCnt*2<<"\t";
            
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