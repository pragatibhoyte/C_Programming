#include<stdio.h>

int CalculateTicketPrice(int iAge)
{
    //Input Filter
    
    if(iAge < 0)
    {
        printf("Invalid Age\n");
        return 0;
    }

    if(iAge >= 0 && iAge <= 10)
    {
        return 200;
    }
    else if(iAge >= 11 && iAge <= 20)
    {
        return 500;
    }
    else if(iAge >= 21 && iAge <=35)
    {
        return 700;
    }
    else if(iAge >= 36 && iAge <= 50)
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
