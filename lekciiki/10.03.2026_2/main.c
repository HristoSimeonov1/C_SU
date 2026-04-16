#include <stdio.h>
#include <string.h>

int main(){

    char name[] = "Ivan";
    char secondName[] = "Ivanov";

    int result = sizeof(name);

    printf("%d", result);

    return 0;
}