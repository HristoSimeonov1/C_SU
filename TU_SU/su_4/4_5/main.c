#include <stdio.h>
#include <stdlib.h>

int *arr = NULL;
int arr_size = 0;
int arr_capacity = 0;

void add(int x) {
    if (arr_size == arr_capacity) {
        arr_capacity = (arr_capacity == 0) ? 2 : arr_capacity * 2;
        arr = (int *)realloc(arr, arr_capacity * sizeof(int));
    }
    int i = arr_size - 1;
    while (i >= 0 && arr[i] > x) {
        arr[i + 1] = arr[i];
        i--;
    }
    arr[i + 1] = x;
    arr_size++;
    printf("Added: %d\n", x);
}

void delete_val(int x) {
    int new_size = 0;
    for (int i = 0; i < arr_size; i++) {
        if (arr[i] != x) {
            arr[new_size++] = arr[i];
        }
    }
    int count = arr_size - new_size;
    arr_size = new_size;
    printf("Deleted %d instances of %d\n", count, x);
}

void smallest(int x) {
    if (x > 0 && x <= arr_size) {
        printf("%d-th smallest is: %d\n", x, arr[x - 1]);
    } else {
        printf("Not enough elements!\n");
    }
}

int main() {
    int cmd, x;
    printf("Commands: 1: add(x), 2: delete(x), 3: smallest(x), 0: Exit\n");
    while (1) {
        printf("Enter command and value: ");
        scanf("%d", &cmd);
        if (cmd == 0) break;
        scanf("%d", &x);
        if (cmd == 1) add(x);
        else if (cmd == 2) delete_val(x);
        else if (cmd == 3) smallest(x);
    }
    free(arr);
    return 0;
}