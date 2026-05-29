// Write a program which accepts number from user and count frequency of such digits which are less than 6.

#include<stdio.h>

int Count(int iNo)
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

        if(iDigit < 6)
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

    iRet = Count(iValue);

    printf("Frequency of digits less than 6 : %d\n",iRet);

    return 0;
}

// Time Complexity : O(n)
// Space Complexity : O(1) 