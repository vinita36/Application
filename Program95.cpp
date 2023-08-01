/*input:
row = 3
col = 5
output
a  b  c  d  e
c  b  c  d  e
a  b  c  d  e
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
        char ch = 'a';
        for(i = 1; i <= iRow; i++)
        {
            for(j = 1, ch = 'a'; j <= iCol; j++, ch++)
            {
                cout<<ch<<"\t";
                
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