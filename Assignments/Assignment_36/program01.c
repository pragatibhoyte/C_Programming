/*  write a program which accept one number from user and off 7th bit of that number if it is on.Return modified number.

 Input  : 79
 OutPut : 15

*/

#include<stdio.h>

typedef unsigned int UINT;

UINT OffBit(UINT iNo)
{
    UINT iMask = 0X40;
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

    printf("Modified Number is :%d\n",iRet);
    return 0;
}