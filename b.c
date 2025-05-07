#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    printf("Child process (PID: %d) received array in reverse order: ", getpid());
    for (int i = argc - 1; i > 0; i--) { // Start from argc - 1 to skip the program name
        printf("%s ", argv[i]);
    }
    printf("\n");
    return 0;
}

