#include <stdio.h>
#include <stdlib.h>


int main(int argc, char **argv) {
    double serial;

    if (argc != 2) {
        printf("Invalid arguments.\n");
        return -1;
    }

    srand(time(NULL));
    serial = (double)(rand()) / (RAND_MAX / 10.0);

    if ( (strtod(argv[1], NULL) < serial) || \
         (strtod(argv[1], NULL) > serial) ) {
        printf("Too bad...\n");
        return -1;
    }

    printf("You win!\n");
    return 0;
}
