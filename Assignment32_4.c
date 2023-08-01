//write a program which display smallest digits of all elements from singly linear linked list
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
int SmallDigit(int no)
{
    int Small = 9;
    int digit = 0;
    while(no > 0)
    {
         digit = no % 10;
        if(digit < Small)
        {
          Small = digit;
        }
        no = no / 10;
    }
    return Small;

}
void DisplaySmall(PNODE Head)
{
    while(Head != NULL)
    {
       int Small = SmallDigit(Head->data);
       printf("Smallest digit of %d is %d\n", Head->data,Small);
       Head = Head->next; 
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

    InsertLast(&First,415);

    Display(First);
    iRet = Count(First);
    printf("Number of nodes are : %d\n",iRet);
 
    DisplaySmall(First);

    return 0;
}