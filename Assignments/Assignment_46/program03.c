// Write a recursive program which accepts String from user and count no of small chars
// Input : HElloWOrlD
// Output : 5

#include<stdio.h>

int Small(char *str)
{
    static int iCount = 0;

    if(*str != '\0')
    {
        if(*str >= 'a' && *str <='z')
        {
            iCount++;
        }

        str++;
        Small(str);
    }
    
    return iCount;
}

int main()
{
    char crr[20] = {'\0'};
    int iRet = 0;

    printf("Enter String : \n");
    scanf("%[^'\n']s",&crr);

    iRet = Small(crr);

    printf("Number of small characters : %d\n",iRet);

    return 0;
}