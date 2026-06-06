// Accept N numbers from user and return difference between frequency of even number and odd numbers

#include<stdio.h>
#include<stdlib.h>

int Frequency(int Arr[], int iSize)
{
    int iCnt = 0;
    int iCountEven = 0;
    int iCountodd = 0;
    int iDiff = 0;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] % 2 == 0)
        {
            iCountEven++;
        }
        else
        {
            iCountodd++;
        }
    }

    iDiff = iCountEven - iCountodd;

    return iDiff;
}

int main()
{
    int iLength = 0;
    int *p = NULL;
    int iCnt = 0;
    int iRet;

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

    iRet = Frequency(p, iLength);

    printf("Result is %d\n",iRet);

    free(p);

    return 0;
}