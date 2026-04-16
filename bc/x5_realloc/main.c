#include <stdio.h>
#include <stdlib.h>

int main(){

    int number = 0;
    printf("Enter a number: \n");
    scanf("%d", &number);

    float *prices = malloc(number * sizeof(float));

    if(prices == NULL){
        printf("The prices array is empty.\n");
        return 1;
    }

    for(int i = 0; i < number; i++){
        printf("Enter price %d: \n", i + 1);
        scanf("%f", &prices[i]);
    }

    int new_number = 0;
    printf("Enter a new number: \n");
    scanf("%d", &new_number);

    float *temp = realloc(prices, new_number * sizeof(float));
    if(temp == NULL){
        printf("Failed to reallocate memory.\n");
    }
    else{
        prices = temp;

        for(int i = number; i < new_number; i++){
            printf("Enter price %d: \n", i + 1);
            scanf("%f", &prices[i]);
        }

        for(int i = 0; i < new_number; i++){
            printf("$%.2f ",prices[i]);
    }
    }



    free(prices);
    prices = NULL;

    return 0;
}