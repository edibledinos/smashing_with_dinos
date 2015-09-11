#include <stdio.h>
#include <string.h>

int win() {
    printf("You win!\n");
    fflush(stdout);
}

void check(char *name_arg) {
    int size;
    FILE *f;
    char buf[8];
    char name[16];

    memset(buf, 0, 8);
    memset(name, 0, 16);
    memcpy(name, name_arg, strlen(name_arg));

    printf("Hello %s, do you want to play a game?\n", name);
    fflush(stdout);

    while(getchar() != '\n');

    printf("Reading state from disk...\n");
    fflush(stdout);

    f = fopen("stack_rp2.state", "rb");
    if (f) {
        fseek(f, 0, SEEK_END);
        size = ftell(f);
        fseek(f, 0, SEEK_SET);
        fread(buf, 1, size, f);
        fclose(f);
    }
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
