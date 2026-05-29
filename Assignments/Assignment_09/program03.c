// Write a program which accepts number from user and return the count of digits in between 3 and 7.


#include<stdio.h>

int CountRange(int iNo)
{
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    int iCnt = 0;
    int iDigit = 0;

    while(iNo > 0)
    {
        iDigit = iNo % 10;

        if(iDigit > 3 && iDigit < 7)
        {
            iCnt = iCnt + 1;
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

    iRet = CountRange(iValue);

    printf("Count of odd digits between 3 and 7 : %d\n",iRet);

    return 0;
}

// Time Complexity : O(n)
// Space Complexity : O(1)