//minimum maximum
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
        cout<<"Enter the elements:"<<"\n";
        int iCnt = 0;
        for(iCnt = 0; iCnt < iSize; iCnt++)
        {
            cin>>Arr[iCnt];
        }
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

    int MinimumMaximum()
    {
        int iCnt = 0;
        int iMin = Arr[0];
        int iMax = Arr[0];
        for(iCnt = 0; iCnt < iSize; iCnt++)
        {
            if(Arr[iCnt] < iMin)
            {
                iMin = Arr[iCnt];
            }
            if(Arr[iCnt] > iMax)
            {
                iMax = Arr[iCnt];
            }
        }
        cout<<"smallest elements is:"<<iMin<<"\n";
        cout<<"Largest elements is:"<<iMax<<"\n";
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
    aobj.MinimumMaximum();
    return 0;
}