//  count odd digit
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

    int CountOdd()
    {
        int iDigit = 0;
        int iTemp = iNo;
        int iCount = 0;
        while(iTemp  != 0)
        {
           iDigit = iTemp % 10;
           if((iDigit % 2) != 0)
           {
            iCount++;
           }
           iTemp = iTemp / 10;
        }
      return iCount;
    }
};

int main()
{
    int iValue = 0;
    int iRet = 0;

    cout<<"Enter number:"<<"\n";
    cin>>iValue;

    Digit dobj(iValue);
    iRet = dobj.CountOdd();

    cout<<"Odd digit are:"<<iRet<<"\n";
    return 0;
}