#include <stdio.h>
#include <stdbool.h>

void hello(char name[], int age){
    printf("Hello %s\n", name);
    printf("You are %d years old\n", age);
}

int main(){

    hello("Ico", 20);

    return 0;
}