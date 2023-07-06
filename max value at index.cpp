#include <stdio.h>

int main() {
    int array[5];
    int i, maxindex = 0;

    printf("Enter 5 numbers:\n");
    for (i = 0; i < 5; i++) {
        scanf("%d", &array[i]);
        if (array[i] > maxindex) {
            maxindex = i;
        }
    }

    printf("The maximum value in the array is %d at index %d.\n", array[maxindex], maxindex);

    return 0;
}

