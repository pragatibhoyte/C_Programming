/*  write a program which accept one number from user and toggle contents of first and last nibble of the number.Return modified number.
(Nibble is a group of four bits)

*/

#include<stdio.h>

typedef unsigned int UINT;

UINT ToggleNibble(UINT iNo)
{
    UINT iMask = 0xF000000F;
    UINT iResult = 0;  

    iResult = iNo ^ iMask;
   
    return iResult;

}

int main()
{
    UINT iValue = 0, iRet = 0;

    printf("Enter the number:\n");
    scanf("%u",&iValue);

    iRet = ToggleNibble(iValue);

    printf("Modified Number is :%u\n",iRet);
    return 0;
}