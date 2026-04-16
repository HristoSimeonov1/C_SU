#include <stdio.h>

void reverse(int *arr, int size){
    int *start = arr;
    int *end = arr + size - 1;

    while(start < end){
        int temp = *start;
        *start = *end;
        *end = temp;

        start++;
        end--;
    }
}

int main(){

    int arr[5];
    int *p = arr;
    for(int i = 0; i < 5; i++){
        printf("Enter number %d: \n", i + 1);
        scanf("%d", p + i);
    }

    reverse(p, 5);
    printf("Reversed array: \n");
    for(int i = 0; i < 5; i++){
        printf("%d ", *(p + i));
    }
    printf("\n");

    return 0;
}