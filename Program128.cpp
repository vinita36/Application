#include<iostream>
using namespace std;

typedef struct Node
{
    int data;
    struct Node *next;
    struct Node *prev;
}NODE,*PNODE;

class DoublyLL
{
    public:
        PNODE First;
        int iCount;

        DoublyLL();

        void InsertFirst(int no);
        void InsertLast(int no);
        void InsertAtPos(int no, int iPos);

        void DeleteFirst();
        void DeleteLast();
        void DeleteAtPos(int iPos);

        void Display();
        int Count();

};

void DoublyLL::InsertFirst(int no)
{
  PNODE newn = NULL;
  newn = new Node;

  newn->next = NULL;
  newn->prev = NULL;
  newn->data = no; 

  if(First == NULL)
  {
    First = newn;
  }
  else
  {
    First->prev = newn;
    newn->next = First;
    First = newn;
  }
  iCount++;
}
void DoublyLL::InsertLast(int no)
{
   PNODE newn = NULL;
   newn = new NODE;

   newn->next = NULL;
   newn->prev = NULL;
   newn->data = no;

   if(First == NULL)
   {
    First = newn;
   }
   else
   {
    PNODE temp = First;

    while(temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = newn;
    newn->prev = temp;
   }
   iCount++;
}
void DoublyLL::Display()
{
  cout<<"Elememts of linked list are : \n";

  PNODE temp = First;

  while(temp != NULL)
  {
    cout<<" | <=> "<<temp->data<<" | <=> "; 
    temp = temp->next;
  }
  cout<<"NULL\n";
}
int DoublyLL::Count()
{
  return iCount;
}
DoublyLL::DoublyLL()
{
    cout<<"Inside constructor\n";
    First = NULL;
    iCount = 0;
}

void DoublyLL::DeleteFirst()
{
   if(First == NULL)
   {
    return;
   }
   else if(First ->next == NULL)
   {
    delete First;
    First = NULL;
   }
   else 
   {
    First = First->next;
    delete First->prev;
    First->prev = NULL;
   }
   iCount--;
}
void DoublyLL::DeleteLast()
{
    if(First == NULL)
   {
    return;
   }
   else if(First ->next == NULL)
   {
    delete First;
    First = NULL;
   }
   else 
   {
    PNODE temp = First;

    while(temp->next->next != NULL)
    {
        temp = temp->next;
    }
    delete temp->next;
    temp->next = NULL;
   }
   iCount--;
}

void DoublyLL::InsertAtPos(int no, int iPos)
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
    for(int iCnt = 1;iCnt < iPos-1; iCnt++)
    {
        temp = temp->next;
    }
    PNODE newn = NULL;
    newn = new NODE;

    newn->next = NULL;
    newn->prev = NULL;
    newn->data = no;

    newn->next = temp->next;
    temp->next->prev = newn;
    temp->next = newn;
    newn->prev = temp;
  }
  iCount++;
}
void DoublyLL::DeleteAtPos(int iPos)
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
    for(int iCnt = 1; iCnt < iPos-1; iCnt++)
    {
        temp = temp->next;
    }
    temp->next = temp->next->next;
    delete temp->next->prev;
    temp->next->prev = temp;
  }
  iCount--;
}

int main()
{
    DoublyLL obj;
    int iChoice = 0;
    int iValue = 0;
    int iPosition = 0;

    cout<<"Marvellous linkedlist application\n";

    while(1)

    cout<<"--------------------------------------------\n";
    
    cout<<"Please enter your choice : \n";
    cout<<"1 : Insert node First position\n";
    cout<<"2 : Insert node last position\n";
    cout<<"3 : Delete node first position\n";
    cout<<"4 : Delete node last position\n";
    cout<<"5 : Insert node at the given position\n";
    cout<<"6 : Delete node at the given position\n";
    cout<<"7 : Display elements iof linked list\n";
    cout<<"8 : Count number of node from linked list\n";
    cout<<"9 : Terminatethe application\n";

    cout<<"------------------------------------------------\n";

    cin>>iChoice;
    return 0;
}
   