#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>

int main() {
    pid_t pid1, pid2;

    printf("I am parent\n");
    printf("My ID %d\n", getpid());
    printf("My parent ID %d\n", getppid());

    pid1 = fork();  // First fork - creates child process

    if (pid1 == 0) { // Child process
        printf("I am child\n");
        printf("My ID %d\n", getpid());
        printf("My parent ID %d\n", getppid());
    } else {
        pid2 = fork();  // Second fork - creates sibling process

        if (pid2 == 0) { // Sibling process
            printf("I am sibling\n");
            printf("My ID %d\n", getpid());
            printf("My parent ID %d\n", getppid());
        }
    }

    return 0;
}
