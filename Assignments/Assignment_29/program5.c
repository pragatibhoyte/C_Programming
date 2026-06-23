/* Accept division of students from user and depends on the division displa exam timing. There are 4 division in school as A,B,C,D. Exam of division A at 7AM, B at 8.30 AM, C at 9.20AM and D at 10.30 AM.
   (Application should be case insensative)  */

#include<stdio.h>

void DisplaySchedule(char chDiv)
{
    if(chDiv == 'A' || chDiv == 'a')
    {
        printf("Your exam time is 7 AM\n");
    }
    else if(chDiv == 'B' || chDiv == 'b')
    {
        printf("Your exam time is 8:30 AM\n");
    }
    else if(chDiv == 'C' || chDiv == 'c')
    {
        printf("Your exam time is 9:20 AM\n");
    }
    else if(chDiv == 'D' || chDiv == 'd')
    {
        printf("Your exam time is 10:30 AM\n");
    }
    else
    {
        printf("Please Enter valid Division\n");
    }
}

int main()
{
    char cValue = '\0';

    printf("Enter a character : \n");
    scanf("%c",&cValue);

    DisplaySchedule(cValue);

    return 0;
}