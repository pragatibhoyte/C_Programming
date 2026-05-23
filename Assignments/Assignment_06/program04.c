// Write a program which accepts number from user and displays its table

#include<stdio.h>

void Table(int iNo)
{
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    int iCnt = 1;

    for(iCnt = 1; iCnt <= 10; iCnt++)
    {
        printf("%d  ", iNo * iCnt);
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number : ");
    scanf("%d",&iValue);

    Table(iValue);

    return 0;
}

// Time Complexity : O(1)  --> cause loop always runs 10 times that constant so 1
// Space Complexity : O(1)