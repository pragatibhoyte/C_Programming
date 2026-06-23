/*
    Write a program which accepts string from user check wheather 
    it contains vowels or not

*/

#include<stdio.h>
#include<stdbool.h>

bool ChkVowel(char *str)
{
    while(*str != '\0')
    {
        if(*str == 'a' || *str=='e' || *str=='i' || *str=='o'|| *str=='u' )
        {
            return true;
        }

        *str++;
    }

    return false;
}

int main()
{
    char Arr[20];
    bool bRet = false;
   
    printf("Enter String : \n");
    scanf("%[^'\n']s",Arr);

    bRet = ChkVowel(Arr);

    if(bRet == true)
    {
        printf("Contains Vowel\n");
    }
    else
    {
        printf("There is no Vowel\n");
    }

    return 0;
}