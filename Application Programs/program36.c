#include<stdio.h>

int main()
{
    int iValue = 0;

    printf("Enter Number : \n");
    scanf("%d",&iValue);

    for(int iCnt = 2; iCnt < iValue; iCnt++)
    {
        if(iValue % iCnt == 0)
        {
            printf("Number is not prime\n");
            return 1;
        }
    }

    printf("Number is prime Number\n");

    return 0;
}