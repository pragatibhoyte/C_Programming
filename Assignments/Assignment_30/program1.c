/*
    Write a program which displays ASCII table. Table contains symbol, 
    Decimal, Hexadecimal and Octal Representation of every member 
    from 0 to 255
*/

#include<stdio.h>

void DisplayASCII()
{
    int i = 0;

    printf("Symbol");
    printf(" Decimal");
    printf(" Hexadecimal");
    printf(" Octal\n");

    for(i = 0; i <= 255; i++)
    {
        printf("%c\t",i);
        printf("%d\t",i);
        printf("%x\t",i);
        printf("%o\n",i);
    }
}

int main()
{
    DisplayASCII();

    return 0;
}