/* Write a application which accept file name from user and create that file.

Input : Demo.txt

Output : File created Successfully
*/

#include<stdio.h>
#include<fcntl.h>

int main()
{
    char fname[30] = {'\0'};
    int fd = 0;

    printf("Enter file name : \n");
    scanf("%[^\n]s", fname);

    fd = creat(fname, 0777);

    if(fd == -1)
    {
        printf("Unable to create file\n");
    }
    else
    {
        printf("File created successfully\n");
    }

    return 0;
}