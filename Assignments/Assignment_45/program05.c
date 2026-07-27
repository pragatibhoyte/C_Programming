// Write a recursive program which accepts number from user and return product of its digits
// Input : 679
// Output : 24

#include<stdio.h>

int Mult(int iNo)
{
    static int iMul = 1;

    int iDigit = 0;

    if(iNo > 0)
    {
        iDigit = iNo % 10;
        iMul = iMul * iDigit;

        Mult(iNo/10);
    }
    
    return iMul;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter Number : \n");
    scanf("%d",&iValue);

    iRet = Mult(iValue);

    printf("Multiplication of digits : %d\n",iRet);

    return 0;
}