// Write a program which accepts N and print first 5 multiples of N
    
#include<stdio.h>

void MultipleDisplay(int iNo)
{
    int iCnt = 0;
    int i = 1;
    while(iCnt < 5)
    {
        printf("%d  ",iNo*i);
        i++;
        iCnt++;
    }
    
}

int main()
{
    int iValue = 0;

    printf("Enter number : ");
    scanf("%d",&iValue);

    MultipleDisplay(iValue);

    return 0;
}