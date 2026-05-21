// Write a program which accepts one number from user and print that number of even numbers on screen

#include<stdio.h>

void PrintEven(int iNo)
{
    if(iNo <= 0)
    {
        return;
    }

    int iCnt = 0;
    int iNum = 2;

    while(iCnt < iNo)
        {
            if(iNum % 2 == 0)
            {
                printf("%d  ",iNum);
                iCnt++;
            }

            iNum++;
        }
}

int  main()
{
    int iValue = 0;

    printf("Enter Number : ");
    scanf("%d",&iValue);

    PrintEven(iValue);

    return 0;
}