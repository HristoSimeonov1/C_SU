#include <stdio.h>

int main(){

    FILE *pFile = fopen("output.txt", "w");

    char text[] = "LAINA LAINA LAINA\nPITAH PITAH PITAH";

    if(pFile == NULL){
        printf("Error opening file\n");
        return 1;
    }

    fprintf(pFile, "%s", text);

    fclose(pFile);

    return 0;
}