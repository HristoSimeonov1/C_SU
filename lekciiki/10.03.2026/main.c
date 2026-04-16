#include <stdio.h>
#include <string.h>

int main(){

    char name[] = "Ivan";
    char secondName[] = "Petkan";

    int result = strcmp(name, secondName);

    printf("%d", result);

    return 0;
}