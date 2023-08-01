//Display digits
#include<iostream>
using namespace std;

class Digit
{
    private:
    int iNo;

    public:
    Digit(int X)
    {
        iNo = X;
    }

    int Display()
    {
        int iDigit = 0;
        int iTemp = iNo;
        while(iTemp != 0)
        {
            iDigit = iTemp % 10;
            cout<<iDigit<<"\n";
            iTemp = iTemp / 10;
        }
    }
};

int main()
{
    int iValue = 0;

    cout<<"Enter number:"<<"\n";
    cin>>iValue;

    Digit dobj(iValue);
    dobj.Display();
    return 0;
}