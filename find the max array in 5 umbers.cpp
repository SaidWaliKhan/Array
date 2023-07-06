#include<stdio.h>

int main() {
    int array[5];
    int i, max = 0;
    
    printf("Enter 5 numbers :\n ");
    
    for (i = 0; i < 5; i++) {  
        scanf("%d", &array[i]);
        if (array[i] > max) {
            max = array[i];
        }
    }  
    
    printf("The maximum value is %d\n", max);
    
    return 0;
}
