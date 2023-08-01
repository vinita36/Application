// Doubly Linear LinkedList

#include<iostream>
using namespace std;

typedef class Node
{
   public:
   int data;
   Node *next;
   Node *prev;

   Node()
   {
    data = 0;
    next = NULL;
    prev = NULL;
   }

   Node(int no)
   {
    data = no;
    next = NULL;
    prev = NULL;
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

        cout<<"Elements of linkedlist are:\n";

        for(int iCnt = 1; iCnt <= iCount; iCnt++)
        {
            cout<<"| "<<temp->data<<" | <=>";
            temp = temp->next;
        }
        cout<<"NULL\n";
    }

    int Count()
    {
        return iCount;
    }
};

class DoublyLL:public LinkedList
{
    private:
    PNODE Last;

    public:
    DoublyLL();
    ~DoublyLL();

    void InsertFirst(int no);
    void InsertLast(int no);
    void InsertAtPos(int no, int iPos);

    void DeleteFirst();
    void DeleteLast();
    void DeleteAtPos(int iPos);

};

DoublyLL:: DoublyLL()
{
   Last = NULL;
} 

void DoublyLL::InsertFirst(int no)
{
   PNODE newn = new NODE(no);

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
void DoublyLL :: InsertLast(int no)
{
   PNODE newn = new NODE(no);

    if(First == NULL)
    {
        First = newn;
    }
    else
    {
        PNODE temp = First;

        while(temp->next != NULL);
        {
            temp = temp->next;
        }
      temp->next = newn;
      newn->prev = temp;
    }
    iCount++;
}
void DoublyLL :: DeleteFirst()
{
    if(First == NULL)
    {
        return;
    }
    else if(First->next == NULL)
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
void DoublyLL :: DeleteLast()
{
        if(First == NULL)
    {
        return;
    }
    else if(First->next == NULL)
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

         iCount--;
    }
}
void DoublyLL :: InsertAtPos(int no, int iPos)
{

}
void DoublyLL::DeleteAtPos(int no)
{

}

int main()
{
    DoublyLL obj;
    int iRet = 0;

    obj.InsertFirst(51);
    obj.InsertFirst(21);
    obj.InsertFirst(11);

    obj.Display();
    iRet = obj.Count();

    cout<<"Number of elements are:"<<iRet<<"\n";

    obj.InsertLast(101);
    obj.InsertLast(111);

     obj.Display();
    iRet = obj.Count();

    cout<<"Number of elements are:"<<iRet<<"\n";

    obj.DeleteFirst();
    obj.DeleteLast();

    obj.Display();
    iRet = obj.Count();

    cout<<"Number of elements are:"<<iRet<<"\n";

    return 0;
}