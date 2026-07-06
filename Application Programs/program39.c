// Prime Number with using iCount

#include<stdio.h>
#include<stdbool.h>

bool ChkPrime(int iNo)
{
    int iCnt = 0;
    int iCount = 0;

    for(iCnt = 2; iCnt <= iNo/2; iCnt++)
    {
        if(iNo % iCnt == 0)
        {
            iCount++;
            break;
        }
    }

    if(iCount > 0)
    {
        return false;
    }

    return true;
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