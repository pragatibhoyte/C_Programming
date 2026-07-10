/*
    Search an Element
    Check whether a number is present 

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
    printf("\n");

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

bool Search(PNODE first, int No)
{
    while(first != NULL)
    {
        if(first->data == No)
        {
            return true;
        }

        first = first->next;
    }

    return false;
}

int main()
{
    PNODE head = NULL;
    bool bRet = false;
    int iValue = 0;

    InsertLast(&head,11);
    InsertLast(&head,21);
    InsertLast(&head,51);
    InsertLast(&head,101);
    InsertLast(&head,111);

    printf("Enter Element to search\n");
    scanf("%d",&iValue);

    Display(head);
    bRet = Search(head,iValue);

    if(bRet == true)
    {
        printf("\n%d is present\n",iValue);
    }
    else
    {
        printf("\n%d is not present\n",iValue);
    }
}