#include <stdio.h>
#include <string.h>

int check(char ok_arg, char *name_arg) {
    char name[16];
    char flags[4] = {ok_arg, 0, 0, 0};

    strcpy(name, name_arg);

    if (flags[0]) {
        printf("You win!\n");
        return 0;
    } else {
        printf("Too bad...\n");
        return -1;
    }
}

int main(int argc, char **argv) {
    if (argc != 2) {
        printf("Invalid arguments.\n");
        return -1;
    }

    return check(0, argv[1]);
}
