/* Write a application which accept file name from user and display size of file.

Input : Demo.txt

Output : file size is 13 bytes
*/

#include<stdio.h>
#include<fcntl.h>

int main()
{
    char fname[30] = {'\0'};
    char Buffer[100] = {'\0'};
    int fd = 0;
    int iRet = 0;
    int iSize = 0;

    printf("Enter file name : \n");
    scanf("%[^\n]s", fname);

    fd = open(fname, O_RDONLY);

    if(fd == -1)
    {
        printf("Unable to open file\n");
        return 0;
    }
    
    while((iRet = read(fd, Buffer, sizeof(Buffer))) != 0)
    {
        iSize = iSize + iRet;
    }

    printf("File size is %d bytes\n", iSize);

    close(fd);

    return 0;
}