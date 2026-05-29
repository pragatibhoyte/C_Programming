// Write a program which accepts number from user and return count of odd digits.


#include<stdio.h>

int CountOdd(int iNo)
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

        if(iDigit % 2 != 0)
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

    iRet = CountOdd(iValue);

    printf("Count of odd digits : %d\n",iRet);

    return 0;
}

// Time Complexity : O(n)
// Space Complexity : O(1) 