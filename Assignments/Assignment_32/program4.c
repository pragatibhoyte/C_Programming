// Write a program which accepts string from user and display only digits from that string.

#include<stdio.h>

void DisplayDigit(char *str)
{
    while(*str != '\0')
    {
        if(*str >= '0' && *str <= '9')
        {
            printf("%c",*str);
        }

        str++;
    }

    printf("\n");
}

int main()
{
    char Arr[20];

    printf("Enter String : \n");
    scanf("%[^\n]",Arr);

    DisplayDigit(Arr);

    return 0;
}