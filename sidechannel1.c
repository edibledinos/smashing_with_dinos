#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

char SECRET[] = "SmashingWithDinos";

int min(a, b) {
    return a < b ? a : b;
}

int main(int argc, char **argv) {
    int i, n;

    if (argc != 2) {
        printf("Invalid arguments.\n");
        return -1;
    }

    n = min(strlen(argv[1]), strlen(SECRET));
    for(i = 0; i < n; ++i) {
        if (argv[1][i] != SECRET[i]) {
            usleep(100000);
            printf("Too bad...\n");
            return -1;
        }
    }

    if (strlen(argv[1]) == strlen(SECRET)) {
        printf("You win!\n");
        return 0;
    } else {
        printf("Too bad...\n");
        return -1;
    }
}
