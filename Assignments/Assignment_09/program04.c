// Write a program which accepts number from user and return multiplication of all digits.

#include<stdio.h>

int MultDigits(int iNo)
{
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    int iDigit = 0;
    int iMul = 1;

    while(iNo > 0)
    {
        iDigit = iNo % 10;
        iNo = iNo / 10;

        if(iDigit == 0)
        {
            continue;
        }
        else
        {
            iMul = iMul * iDigit;
        }
    }

    return iMul;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number : ");
    scanf("%d",&iValue);

    iRet = MultDigits(iValue);

    printf("Multiplication of digits : %d\n",iRet);

    return 0;
}

// Time Complexity : O(n)
// Space Complexity : O(1)