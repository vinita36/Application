// singly circular linkedlist

#include<iostream>
using namespace std;

typedef class Node
{
    public:
    int data;
    Node *next;

    Node()
    {
        data = 0;
        next = NULL;
    }
    Node(int Value)
    {
        data = Value;
        next = NULL;
    }
}NODE, *PNODE;

class LinkedList
{
    public:
      PNODE First;
      int iCount;

      LinkedList()
      {
        First = NULL;
        iCount = 0;
      }

      virtual void InsertFirst(int no) = 0;
      virtual void InsertLast(int no) = 0;
      virtual void InsertAtPos(int no, int iPos) = 0;

      virtual void DeleteFirst() = 0;
      virtual void DeleteLast() = 0;
      virtual void DeleteAtPos(int iPos) = 0;

      void Display()
      {
        PNODE temp = First;

        cout<<"Elements of linked list are :\n";

        for(int iCnt = 1; iCnt <= iCount; iCnt++)
        {
            cout<<"| "<<temp->data<<" | ->";
            temp = temp->next;
        }
        cout<<"NULL\n";
      }
      int Count()
      {
        return iCount;
      }
};

class SinglyCL : public LinkedList
{ 
   private:
      PNODE Last;

   public:
     SinglyCL();
     ~SinglyCL();

     void InsertFirst(int no);
     void InsertLast(int no);
     void InsertAtPos(int no, int iPos);

     void DeleteFirst();
     void DeleteLast();
     void DeleteAtPos(int iPos);
};

SinglyCL :: SinglyCL()
{
    Last = NULL;
}
SinglyCL :: ~SinglyCL()
{}

void SinglyCL:: InsertFirst(int no)
{
  PNODE newn = new NODE(no);

  if(First == NULL && Last == NULL)
  {
    First = newn;
    Last = newn;
  }
  else
  {
    newn->next = First;
    First = newn;
  }
  Last->next = First;

  iCount++;
} 

void SinglyCL :: InsertLast(int no)
{
   PNODE newn = new NODE(no);

   if(First == NULL && Last == NULL)
   {
    First = newn;
    Last = newn;
   }
   else
   {
    Last->next = newn;
    Last = Last->next;
   }
   Last->next = First;

   iCount++;
}
 
 void SinglyCL :: DeleteFirst()
 {
    if((First == NULL) &&(Last == NULL))
    {
        return;
    }
    else if(First == Last)
    {
        delete First;
        First = NULL;
        Last = NULL;
    }
    else
    {
        First = First->next;
        delete Last->next;

        Last->next = First;

        
    }
    iCount--;
 }

 void SinglyCL :: DeleteLast()
 {
    if((First == NULL) && (Last == NULL))
    {
        return;
    }
    else if(First == Last)
    {
        
        delete First;
        First = NULL;
        Last = NULL;
    }
    else
    {
       PNODE temp = First;
        while(temp->next != NULL)
        {
          temp = temp->next;
        }
        delete Last;
        Last = temp;
        Last->next = First;

        
    }
   iCount--;
 }

 void SinglyCL :: InsertAtPos(int no, int iPos)
 {
    if((iPos < 1) || (iPos > iCount+1))
    {
      cout<<"Invalid position";
      return;
    }

     if(iPos == 1)
      {
        InsertFirst(no);
      }
     else if(iPos == iCount+1)
     {
        InsertLast(no);
     }
     else
     {
        PNODE temp = First;

        for(int iCnt = 1; iCnt < iPos-1; iCnt++)
        {
          temp = temp->next;
        }
        PNODE newn = new NODE(no);

        newn->next = temp->next;
        temp->next = newn;

        Last->next = First;

        iCount++;
     }
     
 }

 void SinglyCL :: DeleteAtPos(int iPos)
 {
    if((iPos < 1) || (iPos > iCount))
    {
      cout<<"Invalid position";
      return;
    }

     if(iPos == 1)
      {
        DeleteFirst();
      }
     else if(iPos == iCount)
     {
        DeleteLast();
     }
     else
     {
        PNODE temp = First;
        PNODE tempX = NULL;

        for(int iCnt = 1; iCnt < iPos-1; iCnt++)
        {
          temp = temp->next;
        }
        tempX = temp->next;

        temp->next = temp->next->next;
        delete tempX;

        iCount--;
     }
 }
  

int main()
{
   SinglyCL obj;
   int iRet = 0;

   obj.InsertFirst(101);
   obj.InsertFirst(51);
   obj.InsertFirst(21);
   obj.InsertFirst(11);

   obj.InsertLast(111);

   obj.Display();
   iRet = obj.Count();

   cout<<"Number of elements are: "<<iRet<<"\n";

   obj.InsertAtPos(55,4);

   obj.Display();
   iRet = obj.Count();


   cout<<"Number of elements are: "<<iRet<<"\n";

   obj.DeleteAtPos(4);

   obj.Display();
   iRet = obj.Count();

   cout<<"Number of elements are: "<<iRet<<"\n";

   obj.DeleteFirst();
   obj.DeleteLast();

    obj.Display();
   iRet = obj.Count();

   cout<<"Number of elements are: "<<iRet<<"\n";

    return 0;
}