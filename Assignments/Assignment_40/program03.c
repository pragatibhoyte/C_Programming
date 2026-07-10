/*
    Last Occurence Position
    Return position of last occurence

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

int LastOccurence(PNODE first, int iNo)
{
    int iCount = 0 ;
    int iCntOcc = 0;

    while(first != NULL)
    {
        iCount++;

        if((first->data) == iNo)
        {
            iCntOcc = iCount;
        }

        first = first->next;
    }

    if(iCntOcc == 0)
    {
        return -1;
    }     
    
    return iCntOcc;
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
    iRet = LastOccurence(head, iValue);

    if(iRet == -1)
    {
        printf("Element not found");
    }
    else
    {
            printf("Last occurence of given number : %d\n",iRet);

    }
}