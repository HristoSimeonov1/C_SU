#include <stdio.h>

void birthday(int *age){
    (*age)++;
}

int main(){

    int age = 25;
    int *pAge = &age;
    printf("Current age: %d\n", age);
    birthday(pAge);
    printf("Age after birthday: %d\n", age);
    birthday(&age);
    printf("Age after another birthday: %d\n", age);

    return 0;
}
