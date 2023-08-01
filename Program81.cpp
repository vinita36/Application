//Input : 7
//output: A  B  C  D  E  F  G   
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
        char ch = '\0';
        for(iCnt = 1, ch = 'A'; iCnt <= iNo; iCnt++, ch++)
        {
            cout<<ch<<"\t";
            
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