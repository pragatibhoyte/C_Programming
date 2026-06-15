/*  
    Accept number from user and display below pattern
    Input : 8
    Output : 2  4   6   8   10  12  14  16
*/

#include<stdio.h>

void Pattern(int iNo)
{
    int iCnt = 0;
    int iCount = 0;

    for(iCnt = 1, iCount = 2; iCnt <= iNo; iCnt++, iCount=iCount+2)
    {
            printf("%d\t",iCount);
    }

    printf("\n");
}

int main()
{
    int iValue = 0;

    printf("Enter number of elements : \n");
    scanf("%d",&iValue);

    Pattern(iValue);

    return 0;
}