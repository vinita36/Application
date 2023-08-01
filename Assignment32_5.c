//write a program which display largrest digits of all elements from singly linear linked list
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
int LargeDigit(int no)
{
    int Large = 0;
    int digit = 0;
    while(no != 0)
    {
         digit = no % 10;
        if(digit > Large)
        {
          Large = digit;
        }
        no = no / 10;
    }
    return Large;

}
void DisplayLarge(PNODE Head)
{
    PNODE temp = Head;
    while(temp != NULL)
    {
       int Large = LargeDigit(temp->data);
       printf("largest digit of %d : %d\n", temp->data,Large);
       temp = temp->next; 
    }
    
}

int main()
{
    PNODE First = NULL;

    int iRet = 0;

    
    InsertFirst(&First,532);
    InsertFirst(&First,250);
    InsertFirst(&First,11);
    
    
    Display(First);
    iRet = Count(First);
    printf("Number of nodes are : %d\n",iRet);

    InsertLast(&First,419);

    Display(First);
    iRet = Count(First);
    printf("Number of nodes are : %d\n",iRet);
 
    DisplayLarge(First);

    return 0;
}