#include<stdio.h>

void Display(int iNo)
{
    // Input Filter

    if(iNo < 0)
    {
        printf("Invalid input\n");
        return;
    }
    
    int iCnt = 0;

    for(iCnt = 0; iCnt <= iNo; iCnt++)
    {
        printf("%d\n",iCnt);
    }
}

int main()
{
    int iCnt = 0;
    int iValue = 0;

    printf("Enter frequency : \n");
    scanf("%d",&iValue);

    Display(iValue);
    
    return 0;
}