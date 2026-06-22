#include<stdio.h>

/*
    Algorithmn

    START
        Accept first number as No1
        Accept second number as No2
        Perform Addition of two numbers 
        Display the result on screen 
    STOP

*/

float Addition(float fNo1, float fNo2)
{
    float fSum = 0;
    fSum = fNo1 + fNo2;
    return fSum; 
}

int main()
{
    float fValue1 = 0;
    float fValue2 = 0;
    float fRet = 0;

    printf("Enter first number : \n");
    scanf("%f",&fValue1);

    printf("Enter second number : \n");
    scanf("%f",&fValue2);

    fRet = Addition(fValue1, fValue2);

    printf("Addition is : %f\n",fRet);
}
