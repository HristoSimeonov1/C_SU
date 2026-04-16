#include <stdio.h>
#include <stdlib.h>

typedef struct{
    char title[50];
    char genre[30];
    float rating;
}Game;

int main(){

    int n = 0;
    printf("How many video games would you like to enter?: \n");
    scanf("%d", &n);
    
    Game *collection = malloc(n * sizeof(Game));

    if(collection == NULL){
        printf("The collection is empty.\n");
        return 1;
    }

    for(int i = 0; i < n; i++){
        printf("Enter title: \n");
        scanf("%s", collection[i].title);

        printf("Enter genre: \n");
        scanf("%s", collection[i].genre);

        printf("Enter rating (out of 10): \n");
        scanf("%f", &collection[i].rating);
    }
    
    int new_n = 0;
    printf("What is the new count of video games?: \n");
    scanf("%d", &new_n);

    Game *temp = realloc(collection, new_n * sizeof(Game));
    if(temp == NULL){
        printf("Failed to reallocate memory\n");
    }else{
        collection = temp;
        for(int i = n; i < new_n; i++){
            printf("Enter title: \n");
            scanf("%s", collection[i].title);

            printf("Enter genre: \n");
            scanf("%s", collection[i].genre);

            printf("Enter rating (out of 10): \n");
            scanf("%f", &collection[i].rating);
        }
    }

    for(int i = 0; i < new_n; i++){
        printf("Game %d: %s (%s) - Rating: %.1f/10\n", i + 1, collection[i].title, collection[i].genre, collection[i].rating);
    }

    free(collection);
    collection = NULL;

    return 0;
}