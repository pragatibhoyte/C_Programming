// Write a recursive program which accepts number from user and return summation of its digits
// Input : 679
// Output : 24

#include<stdio.h>

int Sum(int iNo)
{
    static int iSum = 0;

    int iDigit = 0;

    if(iNo > 0)
    {
        iDigit = iNo % 10;
        iSum = iSum + iDigit;

        Sum(iNo/10);
    }
    
    return iSum;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter Number : \n");
    scanf("%d",&iValue);

    iRet = Sum(iValue);

    printf("Summation of digits : %d\n",iRet);

    return 0;
}