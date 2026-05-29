// Write a program which accepts range from user and return addition of all even numbers in between that range (Range should contain positive numbers only)

#include<stdio.h>

int RangeSumEven(int iStart, int iEnd)
{
    if(iStart > iEnd)
    {
        printf("Invalid range\n");
        return 0;
    }

    if(iStart < 0 || iEnd < 0)
    {
        printf("Invalid range\n");
        return 0;
    }

    int iCnt = 0;
    int iSum = 0;

    for(iCnt = iStart; iCnt <= iEnd; iCnt++)
    {
        if(iCnt % 2 == 0)
        {
            iSum = iSum + iCnt;
        }
    }

    return iSum;
}

int main()
{
    int iValue1 = 0;
    int iValue2 = 0;
    int iRet = 0;
    
    printf("Enter starting number : ");
    scanf("%d",&iValue1);

    printf("Enter ending number : ");
    scanf("%d",&iValue2);

    iRet = RangeSumEven(iValue1, iValue2);

    printf("Sum is : %d\n",iRet);

    return 0;
}

// Time Complexity : O(n)
// Space Complexity : O(1)