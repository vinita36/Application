/// search first occurance

#include<iostream>
using namespace std;

class Array
{
    private:
    int iSize;
    int iSearch;
    int *Arr;

    public:
    Array(int iNo, int iValue)
    {
        iSize = iNo;
        iSearch = iValue;
        Arr = new int[iSize, iSearch];
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
        cout<<"Enter the elements you want to search"<<"\n";
        cin>>iSearch;
    }
    void Display()
    {
        cout<<"Elements of array are:"<<"\n";
        int iCnt = 0;
        for(iCnt = 0; iCnt < iSize; iCnt++)
        {
            cout<<Arr[iCnt]<<"\n";
        }
    }

    int SearchFirstOccurance()
    {
        int iCnt = 0;
        for(iCnt = 0; iCnt < iSize; iCnt++)
        {
            if(Arr[iCnt] == iSearch)
            {
                break;
            }
        }
        if(Arr[iCnt] == iSize)
        {
            return -1;
        }
        else
        {
            return iCnt;
        }
    }

};

int main()
{
    int iNo = 0;
    int iRet = 0;
    int iValue = 0;

    cout<<"Enter number of elements:"<<"\n";
    cin>>iNo;

    Array aobj(iNo, iValue);
    aobj.Accept();
    aobj.Display();
   iRet = aobj.SearchFirstOccurance();
   if(iRet == -1)
   {
    cout<<"There is no such elements"<<"\n";
   }
   else
   {
    cout<<"Occured at index"<<iRet<<"\n";
   }
   return 0;
}