// Accept number from user and check whether number is even or odd

#include<stdio.h>

# define TRUE 1
# define FALSE 0

typedef int BOOL;  // typedef used to create a new name (alias) for an existing data type.

BOOL ChkEven(int iNo)  // int ChkEven(){}
{
    if(iNo % 2 == 0)
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}

int  main()
{
    int iValue = 0;
    BOOL bRet = FALSE;

    printf("Enter Number : ");
    scanf("%d",&iValue);

    bRet = ChkEven(iValue);

    if(bRet == 1)
    {
        printf("Number is Even\n");
    }
    else
    {
        printf("Number is odd\n");
    }

    return 0;
}