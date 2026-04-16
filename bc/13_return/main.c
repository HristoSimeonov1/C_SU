#include <stdio.h>
#include <stdbool.h>

bool ageCheck(int age){
    if(age >= 18){
        return true;
    }
    else{
        return false;
    }
}
int main(){

    int age = 17;

    if(ageCheck(age)){
        printf("You may sign up");
    }
    else{
        printf("You must be 18+ to sign up");
    }

    return 0;
}