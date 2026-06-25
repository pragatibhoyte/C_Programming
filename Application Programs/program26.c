#include<stdio.h>
#include<stdbool.h>

bool CheckDivisiblitity(int iNo)
{
    if(iNo % 3 == 0 && iNo % 5 == 0)
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

    printf("Enter a Number to Check Divisibility : \n");
    scanf("%d",&iValue);

    bRet = CheckDivisiblitity(iValue);

    if(bRet == true)
    {
        printf("%d is divisible by both 3 and 5\n",iValue);
    }
    else
    {
        printf("%d is not divisible by both 3 and 5\n",iValue);
    }

    return 0;
}