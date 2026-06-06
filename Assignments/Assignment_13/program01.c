// Accept N numbers from user and return difference between summation of even elements and summation of odd numbers

#include<stdio.h>
#include<stdlib.h>

int Difference(int Arr[], int iSize)
{
    int iSumEven = 0;
    int iSumOdd = 0;
    int iDiff = 0;
    int iCnt = 0;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] % 2 == 0)
        {
            iSumEven = iSumEven + Arr[iCnt];
        }
        else
        {
            iSumOdd = iSumOdd + Arr[iCnt];
        }
    }

    iDiff = iSumEven - iSumOdd;

    return iDiff;
}

int main()
{
    int iLength = 0;
    int *p = NULL;
    int iCnt = 0;
    int iRet = 0;

    p = (int *)malloc(sizeof(int) * iLength);

    if(p == NULL)
    {
        printf("Unable to allocate memory\n");
        return -1;
    }

    printf("Enter number of elements : \n");
    scanf("%d",&iLength);

    printf("Enter %d elements \n",iLength);

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        printf("Enter element %d : ",iCnt+1);
        scanf("%d",&p[iCnt]);
    }

    iRet = Difference(p, iLength);

    printf("Result is : %d\n",iRet);

    free(p);

    return 0;
}