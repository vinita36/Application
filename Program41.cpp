#include<iostream>
using namespace std;
int typedef Bool;
class Digit
{
    private:
    int iNo;
    public:
    Digit(int X)
    {
      iNo = X;
    }

    Bool ChkDigit()
    {
        int iTemp = iNo;
        int iDigit = 0;
        Bool bFlag = false;
        while(iTemp != 0)
        {
            iDigit = iTemp % 10;
            if(iDigit == 8)
            {
                bFlag = true;
                break;
            }
            iTemp = iTemp / 10;
        }
        return bFlag;
    }

};
int main()
{
    int iValue = 0;
    Bool bRet = false;

    cout<<"Enter number:"<<"\n";
    cin>>iValue;

    Digit dobj(iValue);
    bRet = dobj.ChkDigit();
     
     if(bRet == true)
     {
        cout<<"Digit 8 is present"<<"\n";
     }
     else
     {
        cout<<"Digit 8 is not present"<<"\n";
     }
    
   return 0;
}