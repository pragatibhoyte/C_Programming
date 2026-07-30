/* Write a application which accept file name from user and one string from user. write that string at the end of file

Input : Demo.txt
        Hello World

Output : write Hello world at the end of Demo.txt file
*/

#include<stdio.h>
#include<fcntl.h>
#include<string.h>

int main()
{
    char fname[30] = {'\0'};
    char str[100 ] ={'\0'};
    char Buffer[100] = {'\0'};
    int fd = 0;
    int iRet = 0;

    printf("Enter file name : \n");
    scanf("%[^\n]s", fname);

    printf("Enter String : \n");
    scanf(" %[^\n]s", str);

    fd = open(fname, O_RDWR | O_APPEND);

    if(fd == -1)
    {
        printf("Unable to open file\n");
        return 0;
    }
    
    iRet = write(fd, str, strlen(str));

    printf("%d bytes gets written successfully\n", iRet);

    close(fd);

    return 0;
}