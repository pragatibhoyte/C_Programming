/* write a program which accept one number,two positions from user and check whether bit at first or bit at second position is ON or OFF.
Input  : 10   3     7
Output : False

*/

#include<stdio.h>

typedef int BOOL;
typedef unsigned int UINT;

#define TRUE 1
#define FALSE 0

BOOL ChkBit(UINT iNo, int iPos1, int iPos2)
{
    UINT iMask1 = 0;
    UINT iMask2 = 0;

    iMask1 = 1 << (iPos1 - 1);
    iMask2 = 1 << (iPos2 - 1);

    if((iNo & iMask1) == iMask1 || (iNo & iMask2) == iMask2)
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
    int iLocation1 = 0, iLocation2 = 0;
    BOOL bRet = FALSE;

    printf("Enter number : ");
    scanf("%u",&iValue);

    printf("Enter first position : ");
    scanf("%d",&iLocation1);

    printf("Enter second position : ");
    scanf("%d",&iLocation2);

    bRet = ChkBit(iValue, iLocation1, iLocation2);

    if(bRet == TRUE)
    {
        printf("TRUE\n");
    }
    else
    {
        printf("FALSE\n");
    }

    return 0;
}