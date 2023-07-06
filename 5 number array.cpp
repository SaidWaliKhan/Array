#include <stdio.h>

int main() {
    int numbers[5] = {5, 10, 15, 20, 25};
    int i;

    printf("The numbers are:\n");
    for (i = 0; i < 5; i++) {
        printf("%d\n", numbers[i]);
    }

    return 0;
}

