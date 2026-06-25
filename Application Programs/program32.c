#include<stdio.h>
#include<stdbool.h>

bool ChkPerfect(int iNo)
{
    int iCnt = 0;
    int iSum = 0;

    for(iCnt = 1; iCnt <= (iNo/2); iCnt++)
    {
        if(iNo % iCnt == 0)
        {
            iSum = iSum + iCnt;
        }
        if(iSum > iNo)
        {
            break;
        }
    }

    if(iNo == iSum)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int iValue = 0;
    bool bRet = false;

    printf("Enter a Number : \n");
    scanf("%d",&iValue);

    bRet = ChkPerfect(iValue);

    if(bRet == true)
    {
        printf("%d is Perfect Number\n",iValue);
    }
    
    else
    {
        printf("%d is Not Perfect Number\n",iValue);
    }

    return 0;
}
