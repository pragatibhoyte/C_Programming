// Write a program which returns difference between Even and odd factorial of given

#include<stdio.h>

int FactorialDiff(int iNo)
{
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    
    int iCnt = 0;
    int iOddFact = 1;
    int iEvenFact = 1;
    int iDiff = 1;

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if(iCnt % 2 != 0)
        {
            iOddFact = iOddFact * iCnt;
        }
        else
        {
            iEvenFact = iEvenFact * iCnt;
        }
    }

    iDiff = iEvenFact - iOddFact;

    return iDiff;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter Number : ");
    scanf("%d",&iValue);

    iRet = FactorialDiff(iValue);

    printf("Factorial difference is %d",iRet);

    return 0;
}

// Time Complexity : O(N)
// Space Complexity : O(1)  
