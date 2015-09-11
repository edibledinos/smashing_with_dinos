#include <stdio.h>
#include <stdlib.h>


int main(int argc, char **argv) {
    if (argc != 2 || strtod(argv[1], NULL) == 0.0) {
        printf("Invalid arguments.\n");
        return -1;
    }

    if (atoi(argv[1]) != 0) {
        printf("Too bad...\n");
        return -1;
    }

    printf("You win!\n");
    return 0;
}
