#include<stdio.h>
#include<stdbool.h>

bool ChkEvenOdd(int iNo)
{
    int iRemainder = 0;

    iRemainder = iNo % 2;

    if(iRemainder == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int iValue = 0;
    bool bRet = false;

    printf("Enter Number : \n");
    scanf("%d",&iValue);

    bRet = ChkEvenOdd(iValue);

    if(bRet == true)
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