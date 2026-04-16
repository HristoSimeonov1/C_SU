#include <stdio.h>

int main(){

    int a, b;
    printf("Enter the number of rows: \n");
    scanf("%d", &a);
    printf("Enter the number of columns: \n");
    scanf("%d", &b);

    int arr[a][b];

    printf("Enter the elements of the array: \n");
    for(int i = 0; i < a; i++){
        for(int j = 0; j < b; j++){
            scanf("%d", &arr[i][j]);
        }
    }
    printf("The elements of the array are: \n");
    for(int i = 0; i < a; i++){
        for(int j = 0; j < b; j++){
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    int isAscending = 1;
    for(int i = 0; i < a; i++){
        for(int j = 0; j < b - 1; j++){
            if(arr[i][j] > arr[i][j + 1]){
                isAscending = 0;
                break;
            }
        }
        if(!isAscending){
            break;
        }
    }
    int isDescending = 1;
    for(int j = 0; j < b; j++){
        for(int i = 0; i < a - 1; i++){
            if(arr[i][j] < arr[i + 1][j]){
                isDescending = 0;
                break;
            }
        }
        if(!isDescending){
            break;
        }
    }

    if(isAscending){
        printf("The numbers are in ascending order.\n");
    }else{
        printf("The numbers are not in ascending order.\n");
    }

    if(isDescending){
        printf("The numbers are in descending order.\n");
    }else{
        printf("The numbers are not in descending order.\n");
    }
    return 0;
}