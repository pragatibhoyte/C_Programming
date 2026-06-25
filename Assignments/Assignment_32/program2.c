// Write a program which accepts string from user and convert it into upper case

#include<stdio.h>

void strToUpper(char *str)
{
    while(*str != '\0')
    {
        if(*str >= 'a' && *str <= 'z')
        {
            *str = *str - 32;
        }

        str++;
    }
}

int main()
{
    char Arr[20];

    printf("Enter String : \n");
    scanf("%[^\n]",Arr);

    strToUpper(Arr);

    printf("Modified string is : %s\n",Arr);

    return 0;
}