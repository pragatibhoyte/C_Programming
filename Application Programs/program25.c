#include<stdio.h>
#include<stdlib.h>

void CheckDivisiblitity(int iNo)
{
    if(iNo % 3 == 0 && iNo % 5 == 0)
    {
        printf("%d is Divisible by both 3 and 5\n", iNo);
    }
    else
    {
        printf("%d is not Divisible by both 3 and 5\n", iNo);
    }
}

int main()
{
    int iValue = 0;

    printf("Enter a Number to Check Divisibility : \n");
    scanf("%d",&iValue);

    CheckDivisiblitity(iValue);

    return 0;
}