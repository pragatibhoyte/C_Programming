// Write a program which accepts string from user and convert it into lower case

#include<stdio.h>

void strToLower(char *str)
{
    while(*str != '\0')
    {
        if(*str >= 'A' && *str <= 'Z')
        {
            *str = *str + 32;
        }

        str++;
    }
}

int main()
{
    char Arr[20];

    printf("Enter String : \n");
    scanf("%[^'\n']s",Arr);

    strToLower(Arr);

    printf("Modified string is : %s\n",Arr);

    return 0;
}