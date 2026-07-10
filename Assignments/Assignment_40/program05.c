/*
    Count Numbers less than given number X
    int CountLess(PNODE head, int X)

*/

#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

void Display(PNODE first)
{
    while(first != NULL)
    {
        printf("| %d | -> ",first->data);
        first = first->next;
    }

    printf("NULL\n");
}

void InsertLast(PPNODE first, int No)
{
    PNODE newn = NULL;
    PNODE temp = NULL;

    newn = (PNODE)malloc(sizeof(NODE));

    newn->data = No;
    newn->next = NULL;

    if(*first == NULL)
    {
        *first = newn;
    }
    else
    {
        temp = *first;

        while(temp->next != NULL)
        {
            temp = temp->next;
        }

        temp->next = newn;
    }
}

int CountLess(PNODE first, int X)
{
    int iCount = 0 ;

    while(first != NULL)
    {
        if((first->data) < X)
        {
            iCount++;
        }

        first = first->next;
    }

    return iCount;
}

int main()
{
    PNODE head = NULL;
    int iRet = 0;
    int iValue = 0;

    InsertLast(&head,11);
    InsertLast(&head,12);
    InsertLast(&head,13);
    InsertLast(&head,10);
    InsertLast(&head,14);
    InsertLast(&head,10);

    printf("Enter Element : \n");
    scanf("%d",&iValue);

    Display(head);
    iRet = CountLess(head, iValue);

    printf("Count of smaller nos than given number is: %d\n",iRet);

}