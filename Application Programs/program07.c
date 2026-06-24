#include<stdio.h>

int CalculateTicketPrice(int iNo)
{
    if(iNo >= 0 && iNo <= 10)
    {
        return 200;
    }
    else if(iNo >= 11 && iNo <= 20)
    {
        return 500;
    }
    else if(iNo >= 21 && iNo <=35)
    {
        return 700;
    }
    else if(iNo >= 36 && iNo <= 50)
    {
        return 900;
    }
    else
    {
        return 500;
    }
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Please Enter your age to calculate ticket price : \n");
    scanf("%d",&iValue);

    iRet = CalculateTicketPrice(iValue);

    printf("Your Ticket price is : %d\n",iRet);
}
