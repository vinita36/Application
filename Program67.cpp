// search number
#include<iostream>
using namespace std;
int typedef Bool;

class Array
{
    private:
    int iSize;
    int iSearch;
    int *Arr;
    public:
    Array(int iNo,int iValue)
    {
         iSize = iNo;
         iSearch = iValue;
         Arr = new int[iSize,iSearch]; 
    }
    ~Array()
    {
        delete []Arr;
    }
   void Accept()
   {
    cout<<"Enter the elements:"<<"\n";
    int iCnt = 0;
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        cin>>Arr[iCnt];
    }
    cout<<"Enter the number you want to search:"<<"\n";
    cin>>iSearch;
   }
   void Display()
   {
    cout<<"Elements of array are:"<<"\n";
    int iCnt = 0 ;
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        cout<<Arr[iCnt];
    } 
   }

   Bool Search()
   {
    int iCnt = 0;
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt == iSearch])
        {
            break;
        }
    }
    if(Arr[iCnt] == iSize)
    {
        return false;
    }
    else
    {
        return true;
    }
   }
    
};

int main()
{
    int iNo = 0;
    int iValue = 0;
    Bool bRet = false;

    cout<<"Enter the number of elements:"<<"\n";
    cin>>iNo;

    Array aobj(iNo, iValue);
    aobj.Accept();
    aobj.Display();
    bRet = aobj.Search();

    if(bRet == true)
    {
        cout<<"Number is present:"<<"\n";
    }
    else
    {
        cout<<"Number is absent:"<<"\n";
    }
    return 0;
}