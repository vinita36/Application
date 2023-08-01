/*
input:
iRow = 4  iCol = 4
output:
A
A  B
A  B  C
A  B  C  D
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
        char ch = '\0';

        if(iRow != iCol)
        {
            cout<<"Invalid input"<<"\n";
            return;
        }

        for(i = 1; i <= iRow; i++)
        {
            for(j = 1, ch = 'A'; j <= iCol; j++, ch++)
            {
                if(i == j)
                {
                    cout<<ch<<"\t";
                }
                else if(i > j)
                {
                    cout<<ch<<"\t";
                }
                else
                {
                    cout<<" "<<"\t";
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

    cout<<"Enter number of coloums:"<<"\n";
    cin>>iValue2;

    Pattern pobj(iValue1, iValue2);
    pobj.Display();
    return 0;
}