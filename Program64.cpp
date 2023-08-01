//maximum minimum
//Minimum number
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
    int Minimum()
    {
        int iCnt = 0;
        int iMin = Arr[0];

        for(iCnt = 0; iCnt < iSize; iCnt++)
        {
            if(Arr[iCnt] < iMin)
            {
                iMin = Arr[iCnt];
            }
        }
        return iMin;
    }
    int Maximum()
    {
        int iCnt = 0;
        int iMax = Arr[0];

        for(iCnt = 0; iCnt < iSize; iCnt++)
        {
            if(Arr[iCnt] > iMax)
            {
                iMax = Arr[iCnt];
            }
        }
        return iMax;
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
    iRet = aobj.Minimum();
    cout<<"Minimum number is:"<<iRet<<"\n";
    iRet = aobj.Maximum();
    cout<<"Maximum number is:"<<iRet<<"\n";
    return 0; 
}