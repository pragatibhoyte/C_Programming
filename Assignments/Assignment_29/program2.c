// Accept Character from user and check whether it is capital or not (A-Z)

#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkCapital(char ch)
{
    if(ch >= 65 && ch <= 96)
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}

int main()
{
    char ch = '\0';
    BOOL bRet = FALSE;

    printf("Enter a character : \n");
    scanf("%c",&ch);

    bRet = ChkCapital(ch);

    if(bRet == TRUE)
    {
        printf("It is Capital character\n");
    }
    else
    {
        printf("It is not a Capital character\n");
    }

    return 0;
}