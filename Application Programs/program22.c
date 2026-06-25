#include<stdio.h>

int main()
{
    char sName[50] = {'\0'};
    int iAge = 0;
    float fMarks = 0.0f;

    printf("Enter your Name : \n");
    scanf("%[^'\n']s", sName);

    printf("Enter your Age : \n");
    scanf("%d", &iAge);

    printf("Enter your Marks : \n");
    scanf("%f",&fMarks);

    printf("Your Name is : %s\n", sName);
    printf("Your Age is : %d\n",iAge);
    printf("Your Marks are : %.2f\n",fMarks);

    return 0;
}