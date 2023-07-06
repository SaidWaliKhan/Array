#include <stdio.h>

int main() {
    int array[5];
    int i, sum = 0;

    printf("Enter 5 numbers:\n");
    for (i = 0; i < 5; i++) {
        scanf("%d", &array[i]);
        sum = sum+array[i];
    }

    printf("the sum of entered arrays are %d\n",sum);

    return 0;
}
