/* Write a program which accept string from user and copy the content of string into another
string.(Implement strcpy() function)

Input  :  Marvellous Multi OS
Output  : Marvellous Multi OS

*/

#include<stdio.h>

void StrCpyX(char *src, char *dest)
{
    while(*src != '\0')
    {
        *dest = *src;
        src++;
        dest++;
    }

    *dest = '\0';
}

int main()
{
    char Arr[20] = "Marvellous Multi OS";
    char Brr[30];

    StrCpyX(Arr,Brr);

    printf("%s\n",Brr);

    return 0;
}