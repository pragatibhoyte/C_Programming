// Accept N numbers form user and return the difference between largest and smallest number

#include<stdio.h>
#include<stdlib.h>

int Minimum(int Arr[], int iSize)
{
    int iCnt = 0;
    int iMin = 0;
    int iMax = 0;
    int iDiff = 0;

    iMax = Arr[0];
    iMin = Arr[0];

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(iMax < Arr[iCnt])
        {
            iMax = Arr[iCnt];
        }
        
        else if(iMin > Arr[iCnt])
        {
            iMin = Arr[iCnt];
        }
    }

    iDiff = iMax - iMin;

    return iDiff;
}

int main()
{
    int iLength = 0;
    int *p = NULL;
    int iCnt = 0;
    int iRet = 0;

    printf("Enter number of elements : \n");
    scanf("%d",&iLength);

    p = (int *)malloc(sizeof(int) * iLength);

    if(p == NULL)
    {
        printf("Unable to allocate memory\n");
        return -1;
    }

    printf("Enter %d elements : \n",iLength);

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        printf("Enter element %d : ",iCnt+1);
        scanf("%d",&p[iCnt]);
    }

    iRet = Minimum(p, iLength);

    printf("\nDifference is %d\n",iRet);

    free(p);

    return 0;
}