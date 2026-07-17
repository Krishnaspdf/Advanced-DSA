#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
int main()
{
    int fd = open("sample.txt", O_RDONLY);

    if(fd==-1)
    {
        printf("File Opened\n");

        close(fd);

        printf("File Closed\n");
    }

    return 0;
}

