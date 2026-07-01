// Write a program which checks whether 7th & 15th & 21st , 28th bit is ON or OFF.

#include<stdio.h>

typedef int BOOL;
typedef unsigned int UINT;

#define TRUE 1
#define FALSE 0

BOOL ChkBit(UINT iNo)
{
    UINT iMask = 0X08104040;        

    if((iNo & iMask) == iMask)
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}
int main()
{
    UINT iValue = 0;
    BOOL bRet = FALSE;

    printf("Enter the Number :");
    scanf("%u",&iValue);

    bRet = ChkBit(iValue);

    if(bRet == TRUE)
    {
        printf("7th , 15th , 21st and 28th Bit is ON\n");
    }
    else
    {
        printf("7th , 15th , 21st and 28th Bit is OFF\n");
    }
    return 0;
}