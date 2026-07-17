#include <stdio.h>
#include <dirent.h>
int main()
{
    struct dirent *entry;

    DIR *dir = opendir(".");

    while((entry = readdir(dir)) != NULL)
    {
        printf("%s\n", entry->d_name);
    }

    closedir(dir);

    return 0;
}

