#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>
int main()
{
    fork();

    printf("Hello from Process %d\n", getpid());

    return 0;
}
