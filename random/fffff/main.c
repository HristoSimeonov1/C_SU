#include <stdio.h>

int main(){

    FILE *file = fopen("input.txt", "a");
    if(file == NULL){
        printf("Error opening file!\n");
        return 1;
    }
    fprintf(file, "Mude\nGobna\n");

    FILE *readFile = fopen("input.txt", "r");
    if(readFile == NULL){
        printf("Error opening file for reading!\n");
        return 1;
    }
    char buffer[100];
    while(fgets(buffer, sizeof(buffer), readFile) != NULL){
        printf("File: %s", buffer);
    }

    fclose(file);
    return 0;
}