// Write a program which accepts string from user and toggle the case

#include<stdio.h>

void strToggle(char *str)
{
    while(*str != '\0')
    {
        if(*str >= 'a' && *str <= 'z')
        {
            *str = *str - 32;
        }
        else if(*str >= 'A' && *str <= 'Z')
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
    scanf("%[^\n]",Arr);

    strToggle(Arr);

    printf("Modified string is : %s\n",Arr);

    return 0;
}