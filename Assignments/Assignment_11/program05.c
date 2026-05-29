// Write a program which accepts range from user and display all numbers in between that range in inverse order
#include<stdio.h>

void RangeDisplayRev(int iStart, int iEnd)
{
    if(iStart > iEnd)
    {
        printf("Invalid range\n");
        return;
    }

    int iCnt = 0;

    for(iCnt = iEnd; iCnt >= iStart; iCnt--)
    {
        printf("%d\t",iCnt);
    }

    printf("\n");
}

int main()
{
    int iValue1 = 0;
    int iValue2 = 0;
    
    printf("Enter starting number : ");
    scanf("%d",&iValue1);

    printf("Enter ending number : ");
    scanf("%d",&iValue2);

    RangeDisplayRev(iValue1, iValue2);

    return 0;
}

// Time Complexity : O(n)
// Space Complexity : O(1)