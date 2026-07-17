#include <stdio.h>
#include <sys/wait.h>
#include <unistd.h>
int main()
{
    if(fork()==0)
    {
        printf("Child Process\n");
    }
    else
    {
        wait(NULL);
        printf("Parent Process\n");
    }

    return 0;
}
