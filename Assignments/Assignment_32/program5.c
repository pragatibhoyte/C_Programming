// Write a program which accepts string from user and count number of white spaces
#include<stdio.h>

int CountWhite(char *str)
{
    int iCount = 0;

    while(*str != '\0')
    {
        if(*str == ' ')
        {
            iCount++;
        }

        str++;
    }

    return iCount;
}

int main()
{
    char Arr[20];
    int iRet = 0;

    printf("Enter String : \n");
    scanf("%[^\n]",Arr);

    iRet = CountWhite(Arr);

    printf("%d\n",iRet);

    return 0;
}