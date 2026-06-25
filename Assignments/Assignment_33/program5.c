// Write a program which accept string from user reverse that string in place

#include<stdio.h>

void StrRevX(char *str)
{
    char *Start = NULL;
    char *End= NULL;
    char temp = '\0';

    Start = str;

    while(*str != '\0')
    {
        str++;
    }

    str--;

    End = str;

    while(Start <= End)
    {
        temp = *Start;
        *Start = *End;
        *End = temp;

        Start++;
        End--;
    }
}

int main()
{
    char Arr[20];

    printf("Enter String : \n");
    scanf("%[^'\n']s",Arr);

    StrRevX(Arr);

    printf("Modified String is : %s\n",Arr);

    return 0;
}