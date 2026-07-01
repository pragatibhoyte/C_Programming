/* write a program which accept one number from user and count number of ON(1) bits
in it Without using % and / operator.

Input : 11
Output : 3

*/

#include<stdio.h>

typedef unsigned int UINT;

UINT CountOne(UINT iNo)
{
    UINT iCnt = 0;

    while(iNo != 0)
    {
        if((iNo & 1) == 1)
        {
            iCnt++;
        }

        iNo = iNo >> 1;
    }

    return iCnt;
}

int main()
{
    UINT iValue = 0;
    UINT iRet = 0;

    printf("Enter number : ");
    scanf("%u",&iValue);

    iRet = CountOne(iValue);

    printf("Number of ON bits are : %u\n",iRet);

    return 0;
}