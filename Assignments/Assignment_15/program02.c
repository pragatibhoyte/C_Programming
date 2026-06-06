// Accept N numbers form user and accept one another number as NO, return index of first occurence of that NO

#include<stdio.h>
#include<stdlib.h>

int FirstOcc(int Arr[], int iSize, int iNo)
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
        return iCnt;
    }
    else
    {
        return -1;
    } 
}

int main()
{
    int iLength = 0;
    int *p = NULL;
    int iCnt = 0;
    int iRet = 0;
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

    printf("Enter number to find first occurence :");
    scanf("%d",&iValue);

    iRet = FirstOcc(p, iLength, iValue);
    
    if(iRet == -1)
    {
        printf("There is no such number\n");
    }
    else
    {
        printf("First occurence of number is %d\n",iRet);
    }

    free(p);

    return 0;
}