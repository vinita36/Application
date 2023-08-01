//Input : 7
//output: a  b   c  d  e  f  g  
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
        char ch = 'a';
        for(iCnt = 1; iCnt <= iNo; iCnt++)
        {
            cout<<ch<<"\t";
            ch++;
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