//write a program which reverse each of elements from singly linear linked list
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
void ReverseElements(PNODE Head)
{
    while(Head != NULL)
    {
        int no = Head->data;
        int ReverseNum = 0;
        while(no > 0)
        {
            ReverseNum = (ReverseNum * 10) + (no % 10);
            no = no / 10;
        }
        Head->data = ReverseNum;
        Head = Head->next;
    }
}


int main()
{
    PNODE First = NULL;

    int iRet = 0;

    
    InsertFirst(&First,6);
    InsertFirst(&First,41);
    InsertFirst(&First,17);
    InsertFirst(&First,28);
    InsertFirst(&First,11);
    
    Display(First);
    iRet = Count(First);
    printf("Number of nodes are : %d\n",iRet);

    InsertLast(&First,89);

    Display(First);
    iRet = Count(First);
    printf("Number of nodes are : %d\n",iRet);
 
    ReverseElements(First);
    printf("Reverse linked list:");
   Display(First);
    iRet = Count(First);
    printf("Number of nodes are : %d\n",iRet);
 
    return 0;
}