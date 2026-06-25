// Write a program which accept string from user and accept one character. return index of last occurence of that character

#include<stdio.h>

int LastChar(char *str, char ch)
{
    int iCount = 0;
    int iPos = -1;

    while(*str != '\0')
    {
        if(*str == ch)
        {
            iPos = iCount;
        }

        iCount++;
        str++;
    }

    return iPos;
}

int main()
{
    char Arr[20];
    char cValue = '\0';
    int iRet = 0;

    printf("Enter String : \n");
    scanf("%[^'\n']s",Arr);

    printf("Enter Character : \n");
    scanf(" %c",&cValue);

    iRet = LastChar(Arr, cValue);

    printf("Character Last occurence is : %d\n",iRet);

    return 0;
}