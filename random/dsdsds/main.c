#include <stdio.h>

int main() {
    float arr[5];
    float *ptr = arr;
    float sum = 0.0;

    for (int i = 0; i < 5; i++) {
        do {
            printf("Enter number %d [0..100]: ", i + 1);
            scanf("%f", (ptr + i));
            
            if (*(ptr + i) < 0 || *(ptr + i) > 100) {
                printf("Invalid input! Please try again.\n");
            }
        } while (*(ptr + i) < 0 || *(ptr + i) > 100);
        
        sum += *(ptr + i);
    }

    printf("Results:\n");
    printf("Average: %.2f\n", sum / 5);

    return 0;
}