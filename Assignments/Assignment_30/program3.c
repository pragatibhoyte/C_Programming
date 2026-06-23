/*
    Accept character from user, If character is capital then display all the characters 
    from the input characters till Z. if input character is small then print 
    all the characters in reverse order till a. In other cases return directly

*/

#include<stdio.h>

void Display(char ch)
{
    if(ch >= 'a' && ch <= 'z')
    {
        while(ch >= 'a')
        {
            printf("%c\t",ch);
            ch--;
        }
    }
    else if(ch >= 'A' && ch <= 'z')
    {
        while(ch <= 'Z')
        {
            printf("%c\t",ch);
            ch++;
        }
    }
    else
    {
        return;
    }

    printf("\n");
}

int main()
{
    char cValue = '\0';

    printf("Enter character : \n");
    scanf("%c",&cValue);

    Display(cValue);

    return 0;
}