// Write a program which accepts number from user and display all its non factors

#include<stdio.h>

void FactRev(int iNo)
{
    int i = 0;

    for(i=1; i < iNo; i++)
    {
        if(iNo % i != 0)
        {
            printf("%d  ",i);
        }
    }

}

int main()
{
    int iValue = 0;

    printf("Enter number : ");
    scanf("%d",&iValue);

    FactRev(iValue);

    return 0;
}