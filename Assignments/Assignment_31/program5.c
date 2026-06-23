/*
    Write a program which accepts string from user and display it in reverse order

*/

#include<stdio.h>

void Reverse(char *str)
{
    char *start = NULL;
    start = str;

    while(*str != '\0')
    {
        str++;
    }

    str--;

    while(start <= str)
    {
        printf("%c\n",*str);
        str--;
    }

}

int main()
{
    char Arr[20];
    
    printf("Enter String : \n");
    scanf("%[^'\n']s",Arr);

    Reverse(Arr);

    return 0;
}