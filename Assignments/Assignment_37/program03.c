/*  write a program which accept one number and position from user and ON that bit.Return modified number.

 Input  : 10  3
 OutPut : 14
 
*/

#include<stdio.h>

typedef unsigned int UINT;

UINT OnBit(UINT iNo, UINT iPos)
{
    UINT iMask = 0x1;
    UINT iResult = 0;  
    
    iMask = iMask << (iPos - 1);

    iResult = iNo | iMask;
   
    return iResult;

}

int main()
{
    UINT iValue = 0, iRet = 0, iLocation = 0;

    printf("Enter the number:\n");
    scanf("%u",&iValue);

    printf("Enter the Position:\n");
    scanf("%u",&iLocation);

    iRet = OnBit(iValue,iLocation);

    printf("Modified Number is :%u\n",iRet);
    return 0;
}