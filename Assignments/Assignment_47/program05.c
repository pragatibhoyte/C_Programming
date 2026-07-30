/*
    Write a program which accepts file name and one count from user and 
    read that number of character from starting position
*/

#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>
#include<io.h>

#define BUFFER_SIZE 1024

void DisplayN(char fName[], int iSize)
{
    char Buffer[BUFFER_SIZE] = {'\0'};
    int fd = 0;
    int iCount = 0;
    int iRet = 0;
    int i = 0;

    fd = open(fName, O_RDONLY);

    if(fd == -1)
    {
        printf("Unable to open file\n");
        return;
    }

    iRet = read(fd, Buffer, iSize);

    write(1, Buffer, iRet);

    close(fd);
}

int main()
{
    char FileName[20] = {'\0'};
    int iRet = 0;
    int iValue = 0;

    printf("Enter File name : \n");
    scanf("%[^'\n']s",FileName);

    printf("Enter the number of characters : \n");
    scanf(" %d",&iValue);

    DisplayN(FileName, iValue);

    return 0;
}