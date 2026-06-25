#include<stdio.h>
#include<stdbool.h>

void SumFactors(int iNo)
{
    int iCnt = 0;
    int iSum = 0;

    for(iCnt = 1; iCnt <= (iNo/2); iCnt++)
    {
        if(iNo % iCnt == 0)
        {
            iSum = iSum + iCnt;
        }
    }

    printf("Summation of factors is : %d\n",iSum);
}

int main()
{
    int iValue = 0;

    printf("Enter a Number : \n");
    scanf("%d",&iValue);

    SumFactors(iValue);

    return 0;
}
