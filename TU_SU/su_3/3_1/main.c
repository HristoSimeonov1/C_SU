#include <stdio.h>

int main(){

    int n;
    printf("Enter the number of elements: \n");
    scanf("%d", &n);

    int arr[100];
    printf("Enter the sorted array: \n");
    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }

    int maxLen = 1;
    int currentLen = 1;
    int startIndex = 0;
    int maxStartIndex = 0;

    for (int i = 1; i < n; i++) {
        if (arr[i] == arr[i - 1]) {
            currentLen++;
        } else {
            if (currentLen > maxLen) {
                maxLen = currentLen;
                maxStartIndex = startIndex;
            }
            currentLen = 1;
            startIndex = i;
        }
    }

    if (currentLen > maxLen) {
        maxLen = currentLen;
        maxStartIndex = startIndex;
    }

    printf("Start of longest: %d\n", maxStartIndex);
    printf("Length: %d\n", maxLen);

    return 0;
}