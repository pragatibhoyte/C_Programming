// Accept amount in US dollar and return its corresponding value in Indian currency
// Consider 1$ as 70 rupees

#include<stdio.h>

int DollarToINR(int iNo)
{
    int iINR = iNo * 70;
    return iINR;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter Number of USD : ");
    scanf("%d",&iValue);

    iRet = DollarToINR(iValue);

    printf("Value to INR is %d",iRet);

    return 0;
}

// Time Complexity : O(1)
// Space Complexity : O(1)  
