#include <stdio.h>

int main() {
    int array[5];
    int i, sum = 0;

    printf("Enter 5 numbers:\n");
    for (i = 0; i < 5; i++) {
        scanf("%d", &array[i]);
        if (array[i] % 2 == 1) {  
            sum = sum + array[i];
        }
    }

    printf("The sum of odd entered numbers is %d\n", sum);

    return 0;
}
