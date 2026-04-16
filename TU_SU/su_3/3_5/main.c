#include <stdio.h>

int main() {
    int p;
    printf("Enter the number of elements: \n");
    scanf("%d", &p);

    int arr[100];
    printf("Enter the array elements: \n");
    for (int i = 0; i < p; i++) {
        scanf("%d", &arr[i]);
    }

    int k;
    printf("Enter K (to find the K-th largest element): \n");
    scanf("%d", &k);

    if (k <= 0 || k > p) {
        printf("Invalid value for K.\n");
        return 1;
    }

    for (int i = 0; i < p - 1; i++) {
        for (int j = i + 1; j < p; j++) {
            if (arr[i] < arr[j]) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    printf("%d-th largest element: %d\n", k, arr[k - 1]);

    return 0;
}