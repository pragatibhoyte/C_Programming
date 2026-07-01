/*  write a program which accept one number and position from user and off that bit.Return modified number.

 Input  : 10  2
 OutPut : 8
 
*/

#include<stdio.h>

typedef unsigned int UINT;

UINT OffBit(UINT iNo, UINT iPos)
{
    UINT iMask = 0x1;
    UINT iResult = 0;  
    
    iMask = iMask << (iPos - 1);

    iMask = ~iMask;

    iResult = iNo & iMask;
   
    return iResult;

}

int main()
{
    UINT iValue = 0, iRet = 0, iLocation = 0;

    printf("Enter the number:\n");
    scanf("%u",&iValue);

    printf("Enter the Position:\n");
    scanf("%u",&iLocation);

    iRet = OffBit(iValue,iLocation);

    printf("Modified Number is :%u\n",iRet);
    return 0;
}