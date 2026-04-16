#include <stdio.h>

int main() {
    int n;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[100];

    printf("Enter the array:\n");
    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }

    int currentLen = 1;
    int maxLen = 1;

    int currentStart = 0;
    int maxStart = 0;

    for(int i = 1; i < n; i++){
        if(arr[i] == arr[i - 1]){
            currentLen++;
        } else {
            if(currentLen > maxLen){
                maxLen = currentLen;
                maxStart = currentStart;
            }
            currentLen = 1;
            currentStart = i;
        }
    }

    if(currentLen > maxLen){
        maxLen = currentLen;
        maxStart = currentStart;
    }

    printf("Max sequence: ");
    for(int i = maxStart; i < maxStart + maxLen; i++){
        printf("%d ", arr[i]);
    }

    return 0;
}