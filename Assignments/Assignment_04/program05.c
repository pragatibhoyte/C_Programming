// Write a program which accepts number from user and return difference between summation of all its factors and non factors

#include<stdio.h>

int FactDiff(int iNo)
{
    int i = 0;
    int iSumFact = 0;
    int iSumNonFact = 0;
    int iDiff = 0;

    for(i=1; i < iNo; i++)
    {
        if(iNo % i != 0)
        {
            iSumNonFact = iSumNonFact + i;
        }
        if(iNo % i == 0)
        {
            iSumFact = iSumFact + i;
        }
    }

    iDiff = iSumFact - iSumNonFact;

    return iDiff;

}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number : ");
    scanf("%d",&iValue);

    iRet = FactDiff(iValue);
    printf("%d",iRet);

    return 0;
}