#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Running ps with execlp system call\n");
    execlp("ps", "ps", "-eaf", NULL);
    printf("Done.\n");
    exit(0);
}
