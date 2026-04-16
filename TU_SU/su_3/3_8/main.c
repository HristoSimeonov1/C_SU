#include <stdio.h>

int main(){

    printf("Enter 10 numbers: \n");
    int arr[20];

    for(int i = 0; i < 10; i++){
        scanf("%d", &arr[i]);
    }

    int size = 10;

    for(int i = 0; i < 5; i++){
        int num;
        int pos;

        printf("Enter a number: \n");
        scanf("%d", &num);

        printf("Enter the position to insert the number: \n");
        scanf("%d", &pos);

        if(pos < 0 || pos > size){
            printf("Invalid position!\n");
            i--;
            continue;
        }

        for(int j = size; j > pos; j--){
            arr[j] = arr[j - 1];
        }

        arr[pos] = num;

        size++;
    }

    printf("Final array:\n");
    for(int i = 0; i < size; i++){
        printf("%d ", arr[i]);
    }

    return 0;
}