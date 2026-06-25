/* Write a program which accept 2 strings from user and concat second string after string.(Implement strcat() function).

Input  :  Marvellous Infosystems
          Logical Building
          
Output  : Marvellous Infosystems Logical Building

*/

#include<stdio.h>

void StrCatX(char *src, char *dest)
{
    while(*src != '\0') // Traverse first string till end
    {
        src++;
    }

    *src = ' ';      // Add space
    src++;

    while(*dest != '\0')  // Copy contents of destination in source
    {
        *src = *dest;
        src++;
        dest++;
    }

    *src = '\0';
}

int main()
{
    char Arr[50] = "Marvellous Infosystems";
    char Brr[30] = "Logic Building";

    StrCatX(Arr,Brr);

    printf("%s\n",Arr); // Marvellous Infosystems Logic Building

    return 0;
}