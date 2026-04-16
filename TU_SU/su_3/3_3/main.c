#include <stdio.h>

int main(){

    printf("Enter the length of the array: \n");
    int n;
    scanf("%d", &n);
    int arr[100];
    printf("Enter the array: \n");
    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
    printf("The reversed array is: \n");
    for(int i = n - 1; i >= 0; i--){
        printf("%d ", arr[i]);
    }

    return 0;
}