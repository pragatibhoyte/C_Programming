/* write a program which accept one number from user and range of positions from user. toggle all bits from that range.
Input : 897      9      13

toggle all bits from position 9 to 13 of input number ie. 879.

*/

#include<stdio.h>

typedef unsigned int UINT;

UINT ToggleBitRange(UINT iNo, int iStart, int iEnd)
{
    UINT iMask = 0;

    for(int iCnt = iStart; iCnt <= iEnd; iCnt++)
    {
        iMask = iMask | (1 << (iCnt - 1));
    }

    return (iNo ^ iMask);
}

int main()
{
    UINT iValue = 0;
    UINT iRet = 0;
    int iPos1 = 0, iPos2 = 0;

    printf("Enter number : ");
    scanf("%u",&iValue);

    printf("Enter starting position : ");
    scanf("%d",&iPos1);

    printf("Enter ending position : ");
    scanf("%d",&iPos2);

    iRet = ToggleBitRange(iValue, iPos1, iPos2);

    printf("Modified number is : %u\n",iRet);

    return 0;
}