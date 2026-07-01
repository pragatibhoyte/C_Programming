/*  write a program which accept one number from user and toggle 7th bit of that number.Return modified number.

 Input  : 137
 OutPut : 201

*/

#include<stdio.h>

typedef unsigned int UINT;

UINT ToggleBit(UINT iNo)
{
    UINT iMask = 0x40;
    UINT iResult = 0;

    iResult = iNo ^ iMask;

    return iResult;

}

int main()
{
    UINT iValue = 0, iRet = 0;

    printf("Enter the number:\n");
    scanf("%u",&iValue);

    iRet = ToggleBit(iValue);

    printf("Modified Number is :%u\n",iRet);
    return 0;
}