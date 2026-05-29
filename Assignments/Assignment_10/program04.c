// Write a program which accepts temprature in Fahrenheit and convert it into celcius. 
// ( 1 celcius = (Fahrenheit -32 ) * (5/9))

#include<stdio.h>

double FhtoCs(int iNo)
{
    double dCel = 1.0;
    dCel = (iNo - 32) * (5.0/9.0);
    return dCel;
}

int main()
{
    float fValue = 0.0f;
    double dRet = 0.0;

    printf("Enter temprature in fahrenheit : ");
    scanf("%f",&fValue);

    dRet = FhtoCs(fValue);

    printf("Value of fahrnheit to celcius is %lf",dRet);

    return 0;
}

// Time Complexity : O(1)
// Space Complexity : O(1)  
