// odd count
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

    int CountOdd()
    {
        int iCnt = 0;
        int iCounter = 0;
        for(iCnt = 0; iCnt < iSize; iCnt++)
        {
            if((Arr[iCnt] % 2) != 0)
            {
                iCounter++;
            }
        }
        return iCounter;
    }
};


int main()
{
    int iNo = 0;
    int iRet = 0;

    cout<<"Enter the number of elements:"<<"\n";
    cin>>iNo;

    Array aobj(iNo);
    aobj.Accept();
    aobj.Display();
    iRet = aobj.CountOdd();

    cout<<"Odd elements are:"<<iRet<<"\n";
    return 0;
}