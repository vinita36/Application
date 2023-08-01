/*
write a program which search last occurance perticular elements of singley liner list
function should return position at which elements is found
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
    }
    temp -> next = newn;
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
    int SearchLastOccurance(PNODE Head, int No)
    {
        int iPos = ERR_NOTFOUND;
        int cPos = 0;
        while(Head != NULL)
        {
            if(Head->Data == No)
            {
                iPos = cPos;
            }
          Head = Head->next;
            cPos++;
        }
          return iPos;
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
    InsertLast(&First,21);
     Display(First);
    iRet1 = Count(First);
    printf("Numbers of nodes are:%d\n",iRet1);

    printf("Enter node that you want to search:\n");
    scanf("%d", &iValue);

  iRet2 = SearchLastOccurance(First,iValue);
  if(iRet2 == ERR_NOTFOUND)
  {
    printf("node %d not found in the linked list \n", iValue);
  }
  else
  {
    printf("%d occurard at index %d\n",iValue, iRet2);
  }
   

    return 0;
}
