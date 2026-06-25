/* Write a program which accept string from user and copy small character of that string into another
string.

Input  :  Marvellous multi OS
          
Output  : arvellous multi

*/

#include<stdio.h>

void StrCpySmall(char *src, char *dest)
{
    while(*src != '\0')
    {
        if(*src >= 'a' && *src <= 'z' || (*src == ' '))
        {
            *dest = *src;
            dest++;
        }
        src++;
    }

    *dest = '\0';
}

int main()
{
    char Arr[20] = "Marvellous Multi OS";
    char Brr[30];

    StrCpySmall(Arr,Brr);

    printf("%s\n",Brr);

    return 0;
}