#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv) {
    if (argc != 2 || atoi(argv[1]) == 0)
      return -1;
    
    if(argv[1][0] > '0') {
        printf("You lose.\n");
        return -1;
    }
    
    printf("You win!\n");
    return 0;
}
