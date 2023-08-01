// odd Display
#include<iostream>
using namespace std;

class Array
{
    private:
    int iSize;
    int *Arr;
    public:
    Array(int iNo)
    {
        iSize = iNo;
        Arr = new int[iSize];
    }
    ~Array()
    {
        delete []Arr;
    }

    void Accept()
    {
        cout<<"Enter elements:"<<"\n";
        int iCnt = 0;
        for(iCnt = 0; iCnt < iSize; iCnt++)
        {
            cin>>Arr[iCnt];
        }
    }
    void Display()
    {
        cout<<"Elements of Array are:"<<"\n";
        int iCnt = 0;
        for(iCnt = 0; iCnt < iSize; iCnt++)
        {
            cout<<Arr[iCnt]<<"\n";
        }
    }
    int OddDisplay()
    {
       int iCnt = 0;
       for(iCnt = 0; iCnt < iSize; iCnt++)
       {
        if((Arr[iCnt] % 2) != 0)
        {
            cout<<Arr[iCnt]<<"\n";
        }
       } 
    }

};

int main()
{
    int iNo = 0;

    cout<<"Enter number of elements:"<<"\n";
    cin>>iNo;

    Array aobj(iNo);
    aobj.Accept();
    aobj.Display();
    aobj.OddDisplay();
    return 0;
}