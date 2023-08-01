/*
input:
iRow = 4  iCol = 4
output:
*  a  a  a  a
b  *  b  b  b
c  c  *  c  c
d  d  d  *  d
e  e  e  e  *
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

        for(i = 1, ch = 'a'; i <= iRow; i++, ch++)
        {
            for(j = 1; j <= iCol; j++)
            {
                if(i == j)
                {
                    cout<<"*"<<"\t";
                }
                else if(i > j)
                {
                    cout<<ch<<"\t";
                }
                else
                {
                    cout<<ch<<"\t";
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