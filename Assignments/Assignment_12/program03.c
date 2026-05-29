// Write a program which accepts number from user and count frequency of 2 in it.

#include<stdio.h>

int CountTwo(int iNo)
{
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    int iDigit = 0;
    int iCnt = 0;

    while(iNo > 0)
    {
        iDigit = iNo % 10;

        if(iDigit == 2)
        {
            iCnt = iCnt +1;
        }

        iNo = iNo / 10;
    }

    return iCnt;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number : ");
    scanf("%d",&iValue);

    iRet = CountTwo(iValue);

    printf("Frequency of 2 : %d\n",iRet);

    return 0;
}

// Time Complexity : O(n)
// Space Complexity : O(1) 