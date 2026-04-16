#include <stdio.h>

int countEven(int *arr, int size){
    int evenCount = 0;

    for(int i = 0; i < size; i++){
        if(*(arr + i) % 2 == 0){
            evenCount++;
        }
    }

    return evenCount;
}

int main(){

    int arr[5];
    int *p = arr;

    for(int i = 0; i < 5; i++){
        printf("Enter number %d\n", i + 1);
        scanf("%d", p + i);
    }

    int even = countEven(arr, 5);
    printf("Even numbers: %d\n", even);

    return 0;
}