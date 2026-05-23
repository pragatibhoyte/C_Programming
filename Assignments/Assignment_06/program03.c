// Write a program to find multiplication of factorial of given number

#include<stdio.h>

int MultFactorial(int iNo)
{
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    
    int iCnt = 0;
    int iMul = 1;
    for(iCnt = iNo; iCnt > 1; iCnt--)
    {
        iMul = iMul * iCnt;
    }

    return iMul;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number : ");
    scanf("%d",&iValue);

    iRet = MultFactorial(iValue);

    printf("Multiplication of factorials of number is %d",iRet);

    return 0;
}

// Time Complexity : O(n)
// Space Complexity : O(1)