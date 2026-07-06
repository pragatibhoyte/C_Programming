// Prime Number 

#include<stdio.h>
#include<stdbool.h>

bool ChkPrime(int iNo)
{
    if(iNo <= 1)
    {
        return false;
    }

    int iCnt = 0;

    for(iCnt = 2; iCnt * iCnt <= iNo; iCnt++)
    {
        if(iNo % iCnt == 0)
        {
            break;
        }
    }

    if(iCnt*iCnt > iNo)
    {
        return true;
    }

    return false;
}

int main()
{
    int iValue = 0;
    bool bRet = false;

    printf("Enter Number : \n");
    scanf("%d",&iValue);

    bRet = ChkPrime(iValue);

    if(bRet == true)
    {
        printf("%d is Prime Number\n",iValue);
    }
    else
    {
        printf("%d is Not Prime Number\n",iValue);
    }

    return 0;
}