// Write a program which accepts number from user and displays its digits in reverse order.

#include<stdio.h>

int DisplayDigit(int iNo)
{
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    int iDigit = 0;

    while(iNo > 0)
    {
        iDigit = iNo % 10;

        printf("%d\n",iDigit);

        iNo = iNo / 10;
    }

    printf("\n");
}

int main()
{
    int iValue = 0;

    printf("Enter number : ");
    scanf("%d",&iValue);

    DisplayDigit(iValue);

    return 0;
}

// Time Complexity : O(n)
// Space Complexity : O(1) 