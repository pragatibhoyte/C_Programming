/*
    Write a program which accepts string from user and 
    return difference between frequency of small characters 
    and frequency of capital characters

*/

#include<stdio.h>

int Difference(char *str)
{
    int iCountCap = 0;
    int iCountSmall = 0;

    while(*str != '\0')
    {
        if(*str >= 'a' && *str <= 'z')
        {
            iCountSmall++;
        }
        else if(*str >= 'A' && *str <= 'Z')
        {
            iCountCap++;
        }

        *str++;
    }

    return (iCountSmall - iCountCap);
}

int main()
{
    char Arr[20];
    int iRet = 0;
   
    printf("Enter String : \n");
    scanf("%[^'\n']s",Arr);

    iRet = Difference(Arr);

    printf("%d\n",iRet);

    return 0;
}