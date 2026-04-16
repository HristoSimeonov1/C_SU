#include <stdio.h>

int main() {
    int n;
    printf("Enter the number of elements: \n");
    scanf("%d", &n);

    int arr[100];
    printf("Enter the array: \n");
    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }

    int isValid = 1;

    for(int i = 0; i < n - 1; i++){
        if(i % 2 == 0){
            if(arr[i] >= arr[i + 1]){
                isValid = 0;
                break;
            }
        } else {
            if(arr[i] <= arr[i + 1]){
                isValid = 0;
                break;
            }
        }
    }

    if(isValid){
        printf("The relation is successful\n");
    } else {
        printf("The relation is NOT successful\n");
    }

    return 0;
}