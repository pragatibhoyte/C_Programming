/*
    Write a program which accepts file name from user and 
    count number of capital characters from that file
*/

#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>
#include<io.h>

#define BUFFER_SIZE 1024

int CountCapital(char fName[])
{
    char Buffer[BUFFER_SIZE] = {'\0'};
    int fd = 0;
    int iCount = 0;
    int iRet = 0;
    int i = 0;

    fd = open(fName, O_RDONLY);

    if(fd == -1)
    {
        return -1;
    }

    while((iRet = read(fd, Buffer, sizeof(Buffer))) != 0)
    {
        for(i = 0; i < iRet; i++)
        {
            if(Buffer[i] >= 'A' && Buffer[i] <= 'Z')
            {
                iCount++;
            }
        }
    }

    close(fd);
    return iCount;
}

int main()
{
    char FileName[20] = {'\0'};
    int iRet = 0;

    printf("Enter File name : \n");
    scanf("%[^'\n']s",FileName);

    iRet = CountCapital(FileName);

    if(iRet == -1)
    {
        printf("Unable to open file\n");
        return 0;
    }

    printf("Number of capital characters are %d\n",iRet);

    return 0;
}