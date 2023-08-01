//write a program which return smallest element from singly linear list
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

    newn->data = no;
    newn->next = NULL;

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

    newn->data = no;
    newn->next = NULL;

    if(*Head == NULL)
    {
        *Head = newn;
    }
    else
    {
      while(temp->next = NULL)
      {
        temp = temp->next;
      }
       temp->next = newn;
    }
}

void Display(PNODE Head)
{
  printf("Elements of linkilist are:\n");

  while(Head != NULL)
  {
    printf(" | %d | -> ",Head->data);
    Head = Head->next;
  }
  printf("NULL\n");
}
int Count(PNODE Head)
{
    int iCount = 0;
    while(Head != NULL)
    {
        iCount++;
        Head = Head->next;
    }
    return iCount;
}
int Minimum(PNODE Head)
{
int iMin = Head->data;
while(Head != NULL)
{
    if(Head->data < iMin)
    {
     iMin = Head->data;
    
    }
    Head = Head->next;
}
return iMin;
}

int main()
{
    PNODE First = NULL;
    int iRet1 = 0, iRet2 = 0;

    InsertFirst(&First,101);
    InsertFirst(&First,51);
    InsertFirst(&First,21);
    InsertFirst(&First,11);

    Display(First);
    iRet1 = Count(First);
    printf("Number of nodes are:%d\n",iRet1);

    InsertLast(&First,151);

    Display(First);
    iRet1 = Count(First);
    printf("Number of nodes are:%d\n",iRet1);

   iRet2 = Minimum(First);
   printf("Minimum number are%d\n",iRet2);

    return 0;
}