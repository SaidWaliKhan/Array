#include <stdio.h>

int main() {
    float Fnumbers[5] = {5.1, 6.1, 7.1, 8.1, 9.1};
    int i;

    printf("The numbers are:\n");
    for (i = 0; i < 5; i++) {
        printf("%f\n", Fnumbers[i]);
    }

    return 0;
}