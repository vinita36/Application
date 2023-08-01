// write a program which display all pallindrome elements of singly linear linkedlist
#include<stdio.h>
#include<stdlib.h>
int typedef bool;
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
    newn->data = no;
    newn->next = NULL;

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
    printf("Elements of linklist are:\n");
    while(Head != NULL)
    {
      printf(" | %d | -> ",Head->data);
      Head = Head->next;
    }
    printf("NULL \n");
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
bool Pallindrome(int no)
{
    int reverse = 0;
    
    while(no != 0)
    {
      int num = no % 10;
      reverse = (reverse * 10) + num;
      no = no / 10;
    }
    return (no == reverse);
}

void DisplayPallindrome(PNODE Head)
{
    printf("Pallindrome elements in the linklist :");
  while(Head != NULL)
  {
    if(Pallindrome(Head->data))
    {
        printf("%d",Head->data);
    }
    Head = Head->next;
  }
  printf("\n");
 
} 
int main()
{
    PNODE First = NULL;
    int iRet = 0;

    InsertFirst(&First,6);
    InsertFirst(&First,414);
    InsertFirst(&First,17);
    InsertFirst(&First,28);
    InsertFirst(&First,11);

    Display(First);

    iRet = Count(First);
    printf("Number of nodes are :%d\n",iRet);

    InsertLast(&First,89);

    Display(First);

    iRet = Count(First);
    printf("Number of nodes are :%d\n",iRet);

   DisplayPallindrome(First);
   
    return 0;
}