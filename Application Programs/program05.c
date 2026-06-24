#include<stdio.h>

/*
    Algorithmn

    START
        Accept Number as No
        Check if number completely divisible by 2
        if remainder is zero
            print Even
        otherwise
            print Odd
    STOP
    
*/

int ChkEvenOdd(int iNo)
{
    int iRemainder = 0;

    iRemainder = iNo % 2;

    return iRemainder;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter Number : \n");
    scanf("%d",&iValue);

    iRet = ChkEvenOdd(iValue);

    if(iRet == 0)
    {
        printf("%d is Even\n",iValue);
    }
    else
    {
        printf("%d is Odd\n",iValue);
    }
}

////////////////////////////////////////////////////////////////////////
//
// Input : 5
// outpu : 5 is Odd
//
////////////////////////////////////////////////////////////////////////