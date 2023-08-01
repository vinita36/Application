// chk count digit
#include<iostream>
using namespace std;

class Digit
{
    private:
    int iNo;
    int iSearch;
    public:
    Digit(int X, int Y)
    {
        iNo = X;
        iSearch = Y;
    }

   int ChkDigitFrequency()
   {
    int iDigit = 0;
    int iTemp = iNo;
    int iCount = 0;
   
    while(iTemp != 0)
    {
        iDigit = iTemp % 10;
        if(iDigit == iSearch)
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
    int iValue1 = 0, iValue2 = 0;
    int iRet = 0;

    cout<<"Enter number:"<<"\n";
    cin>>iValue1;

    cout<<"Enter number 0 to 9 range:"<<"\n";
    cin>>iValue2;

    Digit dobj(iValue1, iValue2);
    iRet = dobj.ChkDigitFrequency();

    cout<<"Digit frequency are"<<iRet<<"\n";
    return 0; 
}