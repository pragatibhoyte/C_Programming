/*  write a program which accept one number from user and on 4th bit of that number.Return modified number.

 Input  : 73
 OutPut : 73

*/

#include<stdio.h>

typedef unsigned int UINT;

UINT OnBit(UINT iNo)
{
    UINT iMask = 0x08;
    UINT iResult = 0;    

    iResult = iNo | iMask;
   
    return iResult;

}

int main()
{
    UINT iValue = 0, iRet = 0;

    printf("Enter the number:\n");
    scanf("%u",&iValue);

    iRet = OnBit(iValue);

    printf("Modified Number is :%u\n",iRet);
    return 0;
}