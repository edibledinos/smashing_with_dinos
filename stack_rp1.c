#include <stdio.h>
#include <string.h>

int win() {
    printf("You win!\n");
    fflush(stdout);
}

void check(char *name_arg) {
    char name[16];

    strcpy(name, name_arg);
    printf("Hello %s\n", name);
}

int main(int argc, char **argv) {
    if (argc != 2) {
        printf("Invalid arguments.\n");
        return -1;
    }

    check(argv[1]);

    printf("Too bad...\n");

    return 0;
}
