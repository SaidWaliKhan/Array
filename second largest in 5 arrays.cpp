#include <stdio.h>

int main() {
    int array[5];
    int i, max, secLargest;

    printf("Enter 5 numbers:\n");
    for (i = 0; i < 5; i++) {
        scanf("%d", &array[i]);
    }

    max = array[0];
    secLargest = array[0];

    for (i = 1; i < 5; i++) {
        if (array[i] > max) {
            secLargest = max;
            max = array[i];
        } else if (array[i] > secLargest && array[i] < max) {
            secLargest = array[i];
        }
    }

    printf("The second largest number is %d\n", secLargest);

    return 0;
}

