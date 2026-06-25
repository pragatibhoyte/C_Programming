/* Write a program which accept string from user and copy the content of string into another
string.(Implement strcpy() function)

Input  :  Marvellous Multi OS
          10
Output  : Marvellous

note: if third parameter is greater than the size of source string then copy whole string into destination.

*/

#include<stdio.h>

void StrNCpyX(char *src, char *dest, int iCnt)
{
    while((*src != '\0') && (iCnt !=0))
    {
        *dest = *src;
        src++;
        dest++;
        iCnt--;
    }

    *dest = '\0';
}

int main()
{
    char Arr[20] = "Marvellous Multi OS";
    char Brr[30];

    StrNCpyX(Arr,Brr,10);

    printf("%s\n",Brr);

    return 0;
}