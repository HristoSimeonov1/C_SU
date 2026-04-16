#include <stdio.h>

int findMax(int *arr, int size){
    int max = *arr;
    for(int i = 0; i < size; i++){
        if(arr[i] > max){
            max = arr[i];
        }
    }
    printf("Max is: %d\n", max);
}

int main(){

    int arr[5];
    int *p = arr;
    for(int i = 0; i < 5; i++){
        printf("Enter digit number %d: \n", i + 1);
        scanf("%d", p + i);
    }
    findMax(p, 5);

    return 0;
}