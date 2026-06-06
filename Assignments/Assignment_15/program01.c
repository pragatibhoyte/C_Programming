// Accept N numbers form user and anaother number as NO, ckeck whether NO is present or not.

#include<stdio.h>
#include<stdlib.h>
#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL Check(int Arr[], int iSize, int iNo)
{
    int iCnt = 0;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] == iNo)
        {
            break;
        }
    }

    if(iCnt < iSize)
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}

int main()
{
    int iLength = 0;
    int *p = NULL;
    int iCnt = 0;
    BOOL bRet = 0;
    int iValue = 0;

    p = (int *)malloc(sizeof(int) * iLength);

    if(p == NULL)
    {
        printf("Unable to allocate memory\n");
        return -1;
    }

    printf("Enter number of elements : \n");
    scanf("%d",&iLength);

    printf("Enter %d elements : \n",iLength);

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        printf("Enter element %d : ",iCnt+1);
        scanf("%d",&p[iCnt]);
    }

    printf("Enter number to count frequency :");
    scanf("%d",&iValue);

    bRet = Check(p, iLength, iValue);
    
    if(bRet == TRUE)
    {
        printf("%d is present\n",iValue);
    }
    else
    {
        printf("%d is absent\n",iValue);
    }

    free(p);

    return 0;
}