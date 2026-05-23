// Write a program which accepts number from user and if number is leass than 50 then print small, if it is grater than 50 and less than 50 and less than 100 then print medium, and if it is greater than 100 then print large

#include<stdio.h>

void Number(int iNo)
{
    if(iNo < 50)
    {
        printf("Small");
    }
    else if(iNo > 50 && iNo < 100)
    {
        printf("Medium");
    }
    else
    {
        printf("Large");
    }
}

int main()
{
    int iValue = 0;

    printf("Enter Number : ");
    scanf("%d",&iValue);

    Number(iValue);

    return 0;
}

// Time Complexity : O(1)  ---> Constant
// Space Complexity : O(1)  ---> Constant
