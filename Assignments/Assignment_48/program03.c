/* Write a application which accept file name from user and read all data from that file and display contents on screen.

Input : Demo.txt

Output : Display all the data of file.
*/

#include<stdio.h>
#include<fcntl.h>

int main()
{
    char fname[30] = {'\0'};
    char Buffer[100] = {'\0'};
    int fd = 0;
    int iRet = 0;

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
        write(1, Buffer, iRet);
    }

    close(fd);

    return 0;
}