// Write a program which accepts distance in kilometer and convert it into meter
// 1 kilometer = 1000 Meter

#include<stdio.h>

int KMtoMeter(int iNo)
{
    int iMeter = 1;
    iMeter = iNo * 1000;
    return iMeter;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter distance : ");
    scanf("%d",&iValue);

    iRet = KMtoMeter(iValue);

    printf("Value of KM to meter is %d",iRet);

    return 0;
}

// Time Complexity : O(1)
// Space Complexity : O(1)  
