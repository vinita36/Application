/*input:
row = 3
col = 5
output
1  1  1  1  1
*  *  *  *  *
3  3  3  3  3
*  *  *  *  *

*/
#include<iostream>
using namespace std;

class Pattern
{
    private:
    int iRow; 
    int iCol;

    public:
    Pattern(int X, int Y)
    {
        iRow = X;
        iCol = Y;
    }

    void Display()
    {
        int i = 0;
        int j = 0;
        
        for(i = 1; i <= iRow; i++)
        {
            for(j = 1; j <= iCol; j++)
            {
                if((i % 2) == 0)
                {
                cout<<"*"<<"\t";
                }
                else
                {
                    cout<<i<<"\t";
                }
        
            }
            cout<<"\n";
        }
        cout<<"\n";
    }
};
   int main()
  {
    int iValue1 = 0, iValue2 = 0;

    cout<<"Enter number of rows:"<<"\n";
    cin>>iValue1;

    cout<<"Enter numbers of columns:"<<"\n";
    cin>>iValue2;

    Pattern pobj(iValue1, iValue2);
    pobj.Display();
    return 0;
   }