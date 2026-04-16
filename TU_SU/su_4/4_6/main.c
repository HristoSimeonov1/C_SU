#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool is_prime(int num) {
    if (num <= 1) return false;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) return false;
    }
    return true;
}

int main() {
    int n;
    printf("Enter size n: ");
    scanf("%d", &n);

    int *arr1 = (int *)malloc(n * sizeof(int));
    int *arr2 = (int *)malloc(n * sizeof(int));
    int size1 = n;
    int size2 = 0;

    printf("Enter elements:\n");
    for (int i = 0; i < n; i++) scanf("%d", &arr1[i]);

    int i = 0;
    while (i < size1) {
        if (is_prime(arr1[i])) {
            arr2[size2++] = arr1[i];
            for (int j = i; j < size1 - 1; j++) arr1[j] = arr1[j + 1];
            size1--;
        } else {
            i++;
        }
    }

    printf("Array 1: ");
    for (int j = 0; j < size1; j++) printf("%d ", arr1[j]);
    printf("\nArray 2: ");
    for (int j = 0; j < size2; j++) printf("%d ", arr2[j]);
    printf("\n");

    free(arr1);
    free(arr2);
    return 0;
}