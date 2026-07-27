// Write a recursive program which accepts String from user and count no of characters
// Input : Hello
// Output : 5

#include<stdio.h>

int Strlen(char *str)
{
    static int iCount = 0;

    if(*str != '\0')
    {
        iCount++;
        Strlen(str+1);
    }
    
    return iCount;
}

int main()
{
    char crr[20] = {'\0'};
    int iRet = 0;

    printf("Enter String : \n");
    scanf("%s",&crr);

    iRet = Strlen(crr);

    printf("Number of characters : %d\n",iRet);

    return 0;
}