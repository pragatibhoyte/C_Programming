# include<stdio.h>

float AddTwoNumbers(float fNo1, float fNo2)
{
    float fAns = 0.0f;
    fAns = fNo1 + fNo2;
    return fAns;
}

int main()
{
    float fValue1 = 0.0f;                           // Naming Convention
    float fValue2 = 0.0f;
    float fResult = 0.0f;

    printf("Enter first number : \n");              // To store first input
    scanf("%f",&fValue1);                           // To store second input
                                                    // To store the result
    printf("Enter second number : \n");
    scanf("%f",&fValue2);

    fResult = AddTwoNumbers(fValue1 , fValue2);

    printf("Addition is : %f\n",fResult);           // Perform the addition
    
    return 0;
}