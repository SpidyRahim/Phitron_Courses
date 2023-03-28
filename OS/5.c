#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>

int main() {
    pid_t pid = fork();

    if (pid == -1) {
        perror("fork");
        exit(EXIT_FAILURE);
    }

    if (pid == 0) {
        // child process
        system("ls -l");
        exit(EXIT_SUCCESS);
    } else {
        // parent process
        waitpid(pid, NULL, 0);
        printf("Child process finished.\n");
    }

    return 0;
}
