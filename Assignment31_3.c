//write a program which return addition of all even elements  from singly linear linked list
#include<stdio.h>
#include<stdlib.h>

typedef struct Node
{
    int data;
    struct Node *next;
}NODE, *PNODE, **PPNODE;

void InsertFirst(PPNODE Head, int no)
{
    PNODE newn = NULL;
    newn = (PNODE)malloc(sizeof(NODE));

    newn->next = NULL;
    newn->data = no;

    if(*Head == NULL)
    {
        *Head = newn;
    }
    else
    {
        newn->next = *Head;
        *Head = newn;
    }

}
void InsertLast(PPNODE Head, int no)
{
    PNODE newn = NULL;
    newn = (PNODE)malloc(sizeof(NODE));

    PNODE temp = *Head;

    newn->next = NULL;
    newn->data = no;

    if(*Head == NULL)
    {
        *Head = newn;
    }
    else
    {
      while(temp->next != NULL)
      {
        temp = temp->next;
        
      }
      temp->next = newn;
    }
}
void Display(PNODE Head)
{
    printf("Eleemnts oflinklist are:\n");

    while(Head != NULL)
    {
        printf(" | %d | -> ",Head->data);
        Head = Head->next;
    }
    printf("NULL \n");
}
int Count(PNODE Head)
{
    int Count = 0;
    while(Head != NULL)
    {
        Count++;
        Head = Head->next;
    }
    return Count;
}
int Even(PNODE Head)
{
    int iEven = 0;
    while(Head != NULL)
    {
        if((Head->data % 2) == 0)
        {
            iEven = iEven + Head->data;
        }
        Head = Head->next;
    }
    return iEven;
}

int main()
{
    PNODE First = NULL;

    int iRet1 = 0, iRet2 = 0;

    
    InsertFirst(&First,32);
    InsertFirst(&First,20);
    InsertFirst(&First,11);
    
    Display(First);
    iRet1 = Count(First);
    printf("Number of nodes are : %d\n",iRet1);

    InsertLast(&First,11);

    Display(First);
    iRet1 = Count(First);
    printf("Number of nodes are : %d\n",iRet1);

    iRet2 = Even(First);
    printf("Addition of even number are: %d",iRet2);

     
    return 0;
}