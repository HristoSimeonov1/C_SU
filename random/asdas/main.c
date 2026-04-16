#include <stdio.h>
#include <stdlib.h>

typedef struct{
    char brand[30];
    char model[30];
    float price;

}Smartphone;



int main(){

    int n = 0;
    Smartphone *catalog;

    printf("How many smartphones would you like to enter?: \n");
    scanf("%d", &n);

    catalog = malloc(n * sizeof(Smartphone));

    if(catalog == NULL){
        printf("The catalog is empty.\n");
        return 1;
    }

    for(int i = 0; i < n; i++){
        printf("Enter brand: \n");
        scanf("%s", catalog[i].brand);

        printf("Enter model: \n");
        scanf("%s", catalog[i].model);

        printf("Enter price: \n");
        scanf("%f", &catalog[i].price);
    }

    int new_n = 0;
    printf("Enter the new number of smartphones: \n");
    scanf("%d", &new_n);
    Smartphone *temp = realloc(catalog, new_n * sizeof(Smartphone));
    if(temp == NULL){
        printf("Failed to reallocate memory.\n");
    }
    else{
        catalog = temp;

        for(int i = n; i < new_n; i++){
            printf("Enter brand: \n");
            scanf("%s", catalog[i].brand);

            printf("Enter model: \n");
            scanf("%s", catalog[i].model);

            printf("Enter price: \n");
            scanf("%f", &catalog[i].price);

            for(int i = 0; i < new_n; i++){
                printf("Phone %d: %s %s - %.2f lv.\n", i + 1, catalog[i].brand, catalog[i].model, catalog[i].price);
            }

        }
    }

    free(catalog);
}