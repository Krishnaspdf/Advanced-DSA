#include <stdio.h>
#include <sys/stat.h>
int main()
{
    struct stat file;

    stat("sample.txt",&file);

    printf("Size = %ld bytes\n",file.st_size);

    return 0;
}

