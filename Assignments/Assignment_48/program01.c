/* Write a application which accept file name from user and open that file in read mode.

Input : Demo.txt

Output : File opened Successfully
*/

#include<stdio.h>
#include<fcntl.h>

int main()
{
    char fname[30] = {'\0'};
    int fd = 0;

    printf("Enter file name : \n");
    scanf("%[^\n]s", fname);

    fd = open(fname, O_RDONLY);

    if(fd == -1)
    {
        printf("Unable to open file\n");
    }
    else
    {
        printf("File opened successfully\n");
        close(fd);
    }

    return 0;
}