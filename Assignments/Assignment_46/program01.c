// Write a recursive program which accepts String from user and count white spaces
// Input : HE llo EOr LD
// Output : 3

#include<stdio.h>

int WhiteSpace(char *str)
{
    static int iCount = 0;

    if(*str != '\0')
    {
        if(*str == ' ')
        {
            iCount++;
        }

        str++;
        WhiteSpace(str);
    }
    
    return iCount;
}

int main()
{
    char crr[20] = {'\0'};
    int iRet = 0;

    printf("Enter String : \n");
    scanf("%[^'\n']s",&crr);

    iRet = WhiteSpace(crr);

    printf("Number of White Space : %d\n",iRet);

    return 0;
}