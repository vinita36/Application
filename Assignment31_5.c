//write a program which display addition of digits of elements from singly linear linked list
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
int SumDigit(int no)
{
    int Sum = 0;
    while(no != 0)
    {
        Sum = Sum + no % 10;
        no = no / 10;
    }
    return Sum;

}
void DisplaySum(PNODE Head)
{
    while(Head != NULL)
    {
        if(Head == NULL)
        {
            printf("Linkedlist is empty:\n");
            return;
        }
       int Sum = SumDigit(Head->data);
       printf("sum of digits nodes%d is: %d\n", Head->data, Sum);
       Head = Head->next;
    }
    
}

int main()
{
    PNODE First = NULL;

    int iRet = 0;

    
    InsertFirst(&First,240);
    InsertFirst(&First,20);
    InsertFirst(&First,230);
    InsertFirst(&First,110);
    
    Display(First);
    iRet = Count(First);
    printf("Number of nodes are : %d\n",iRet);

    InsertLast(&First,640);

    Display(First);
    iRet = Count(First);
    printf("Number of nodes are : %d\n",iRet);
 
    DisplaySum(First);

    return 0;
}