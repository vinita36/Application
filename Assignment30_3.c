/*
write a program which return addition of all elements from singly 
linear list
*/
#include<stdio.h>
#include<stdlib.h>
#define ERR_NOTFOUND -1

typedef struct node
{
    int Data;
    struct node *next;
}NODE, *PNODE, **PPNODE;

void InsertFirst(PPNODE Head, int No)
{
    PNODE newn = NULL;
    newn = (PNODE)malloc(sizeof(NODE));
    
    newn->Data = No;
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
void InsertLast(PPNODE Head, int No)
{
     PNODE temp = *Head;
    PNODE newn = NULL;
    newn = (PNODE)malloc(sizeof(NODE));

    newn->Data = No;
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
          temp -> next = newn;
    }
    }

void Display(PNODE Head)
{
    printf("Elements of linklist are:\n");

    while(Head != NULL)
    {
        printf("| %d | -> ",Head->Data);
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
int Addition(PNODE Head)
{
    int iSum = 0;
    while(Head != NULL)
    {
        iSum = iSum + Head->Data;
        Head = Head->next;

    }
    return iSum;
}
 
int main()
{
    PNODE First = NULL;
    int iRet1 = 0, iRet2 = 0;
    int iValue = 0;
    InsertFirst(&First,101);
    InsertFirst(&First,51);
    InsertFirst(&First,21);
    InsertFirst(&First,11);

    Display(First);
    iRet1 = Count(First);
    printf("Numbers of nodes are:%d\n",iRet1);

    InsertLast(&First,151);
    
     Display(First);
    iRet1 = Count(First);
    printf("Numbers of nodes are:%d\n",iRet1);

    iRet2 = Addition(First);
    printf("Addition is %d",iRet2);

     
    return 0;
}
