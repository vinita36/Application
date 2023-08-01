//write a program which return second maximum elements from singly linear linked list
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
int SecondMax(PNODE Head)
{
   int iMax1 = Head->data;
   int iMax2 = Head->data;

   while(Head != NULL)
   {
    if(iMax1 < Head->data)
    {
        iMax2 = iMax1;
        iMax1 = Head->data;
    }
    else if((iMax2 < Head->data) && (iMax1 > Head->data))
    {
        iMax2 = Head->data;
    }
    Head = Head->next;
   } 
   return iMax2;
}

int main()
{
    PNODE First = NULL;

    int iRet1 = 0, iRet2 = 0;

    
    InsertFirst(&First,320);
    InsertFirst(&First,230);
    InsertFirst(&First,110);
    
    Display(First);
    iRet1 = Count(First);
    printf("Number of nodes are : %d\n",iRet1);

    InsertLast(&First,240);

    Display(First);
    iRet1 = Count(First);
    printf("Number of nodes are : %d\n",iRet1);

    iRet2 = SecondMax(First);
    printf("Second Maximum  number are: %d",iRet2);

     
    return 0;
}