// check wether number is even or odd

#include<iostream>
using namespace std;
int typedef Bool;
class EvenOdd
{
    public:
    int iNo;

    EvenOdd(int X)
    {
        iNo = X;
    }
    Bool ChkEvenOdd()
    {
       int iCnt = 0;
       for(iCnt = 1; iCnt <= iNo; iCnt++)
       {
        if((iNo % 2) == 0)
        {
            return true;
        }
        else
        {
            return false;
        }
       }

    }
};

int main()
{
 int iValue = 0;
Bool bRet = false;

 cout<<"Enter number:"<<"\n";
cin>>iValue;

EvenOdd eobj(iValue);
bRet = eobj.ChkEvenOdd();
if(bRet == true)
{
    cout<<"Number is Even"<<"\n";
}
else
{
    cout<<"Number is odd"<<"\n";
}
return 0;
}