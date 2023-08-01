// Average
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
        cout<<"Enter the Elements :"<<"\n";
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

    float Average()
    {
        int iCnt = 0;
        int iSum = 0;
        for(iCnt = 0; iCnt < iSize; iCnt++)
        {
            iSum = iSum + Arr[iCnt];
        }
        return ((float)iSum / (float)iSize);
    }
};

int main()
{
    int iNo = 0;
    float fRet = 0;

    cout<<"Enter number of elements:"<<"\n";
    cin>>iNo;

    Array aobj(iNo);
    aobj.Accept();
    aobj.Display();
    fRet = aobj.Average();
    cout<<"Average is :"<<fRet<<"\n";
    return 0;
}