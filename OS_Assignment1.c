#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int 
main(int argc, char *argv[])
{
    fork();
    fork();
    printf("PID: %d\n", (int) getpid());
    return 0;
}
