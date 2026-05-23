// Write a program which accepts radius of circle from user and calculate its Area. Consider value of PI as 3.14.
// Area = PI * Radius * Radius

#include<stdio.h>

double CircleArea(float fRadius)
{
    float PI = 3.14f;
    double dArea = PI * fRadius * fRadius;
    return dArea;
}

int main()
{
    float fValue = 0;
    double dRet = 0;

    printf("Enter radius : ");
    scanf("%f",&fValue);

    dRet = CircleArea(fValue);

    printf("Area of circle is %lf",dRet);

    return 0;
}

// Time Complexity : O(1)
// Space Complexity : O(1)  
