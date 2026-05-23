// Write a program which accepts number from user and display below pattern

#include<stdio.h>

void Display(int iNo)
{
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    int iCnt = 0;

    for(iCnt = 1; iCnt <=iNo; iCnt++)
    {
        printf("*   ");
    }

    for(iCnt = 1; iCnt <=iNo; iCnt++)
    {
        printf("#   ");
    }
}

int main()
{
    int iValue = 0;

    printf("Enter Number : ");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}

// Time Complexity : O(2N) = O(N) 
// Space Complexity : O(1)  
