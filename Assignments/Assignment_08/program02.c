// Write a program which accepts width and height of rectangle from user and calculate its area.
// Area = Width * Height

#include<stdio.h>

double RectArea(float fWidth, float fHeight)
{
    double dArea = 0.0f;
    dArea = fWidth * fHeight;
    return dArea;
}

int main()
{
    float fValue1 = 0;
    float fValue2 = 0;
    double dRet = 0;

    printf("Enter Width : ");
    scanf("%f",&fValue1);

    printf("Enter Height : ");
    scanf("%f",&fValue2);

    dRet = RectArea(fValue1, fValue2);

    printf("Area of Rectangle is %lf",dRet);

    return 0;
}

// Time Complexity : O(1)
// Space Complexity : O(1)  
