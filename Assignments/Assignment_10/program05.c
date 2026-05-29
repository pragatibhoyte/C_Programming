// Write a program which accepts area in square feet and convert it into square meter.
// 1 squrae feet = 0.0929 square meter

#include<stdio.h>

double SquareMeter(float iNo)
{
    double dMeter = 1.0;
    dMeter = iNo * 0.0929;
    return dMeter;
}

int main()
{
    float fValue = 0.0f;
    double dRet = 0.0;

    printf("Enter area in square feet : ");
    scanf("%f",&fValue);

    dRet = SquareMeter(fValue);

    printf("Square feet to Square meter is %lf",dRet);

    return 0;
}

// Time Complexity : O(1)
// Space Complexity : O(1)  
