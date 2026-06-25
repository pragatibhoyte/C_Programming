#include<stdio.h>
#include<stdlib.h>

int main()
{
    char *sName = NULL;
    int iAge = 0;
    float fMarks = 0.0f;

    sName = (char *)malloc(sizeof(char) * 50);

    if(sName == NULL)
    {
        printf("Unable to allocate memory\n");
    }

    printf("Enter your Name : \n");
    scanf("%49[^\n]", sName);

    printf("Enter your Age : \n");
    scanf("%d", &iAge);

    printf("Enter your Marks : \n");
    scanf("%f",&fMarks);

    printf("Your Name is : %s\n", sName);
    printf("Your Age is : %d\n",iAge);
    printf("Your Marks are : %.2f\n",fMarks);

    return 0;
}