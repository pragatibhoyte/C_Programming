/*  write a program which accept one number from user and off 7th and 10th bit of that number if it is on.Return modified number.

 Input  : 577
 OutPut : 1

*/

#include<stdio.h>

typedef unsigned int UINT;

UINT OffBit(UINT iNo)
{
    UINT iMask = 0x240;
    UINT iResult = 0;

    iMask = ~iMask;

    iResult = iNo & iMask;

    return iResult;

}

int main()
{
    UINT iValue = 0, iRet = 0;

    printf("Enter the number:\n");
    scanf("%u",&iValue);

    iRet = OffBit(iValue);

    printf("Modified Number is :%u\n",iRet);
    return 0;
}