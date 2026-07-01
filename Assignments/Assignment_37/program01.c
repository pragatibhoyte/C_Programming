/*  write a program which accept one number and position from user and check whether bit at that position is on or off that number.If the bit is on return true otherwise false.

 Input  : 10  2
 OutPut : TRUE
 
*/

#include<stdio.h>

typedef int BOOL;
typedef unsigned int UINT;

#define TRUE 1
#define FALSE 0

BOOL ChkBit(UINT iNo, UINT iPos)
{
    UINT iMask = 0x1;
    UINT iResult = 0;
    
    iMask = iMask << (iPos - 1);

    iResult = iNo & iMask;

    if(iResult == iMask)
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
    UINT iValue = 0, iLocation = 0;
    BOOL bRet = FALSE;

    printf("Enter the number:\n");
    scanf("%u",&iValue);

    printf("Enter the Position:\n");
    scanf("%u",&iLocation);

    bRet = ChkBit(iValue,iLocation);

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