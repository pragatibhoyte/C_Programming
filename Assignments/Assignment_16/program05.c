// Accept N numbers form user and display summation of digits of each number

#include<stdio.h>
#include<stdlib.h>

void Digits(int Arr[], int iSize)
{
    int iCnt = 0;
    int iTemp = 0;
    int iDigit = 0;
    int iDigitSum = 0;

    printf("\n");

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        iTemp = Arr[iCnt];
        iDigitSum = 0;

        while(iTemp != 0)
        {
            iDigit = iTemp % 10;
            iDigitSum = iDigitSum + iDigit;

            iTemp = iTemp / 10;
        }

        printf("%d  ",iDigitSum);
    }

    printf("\n");
}

int main()
{
    int iLength = 0;
    int *p = NULL;
    int iCnt = 0;

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

    Digits(p, iLength);

    free(p);

    return 0;
}