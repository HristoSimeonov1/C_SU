#include <stdio.h>
#include <stdbool.h> // include booleans

int main(){

    /*
     variable = A reusable container for a value.
                Behaves as if it were the value it contains.
    */

    int age = 25;
    float gpa = 2.5;
    double pi = 3.14159265358979;
    char grade = 'A';
    char name[] = "Hristo";
    bool isOnline = true;

    printf("You are %d years old\n", age); // %d = decimal
    printf("Your gpa is %.1f\n", gpa); // %f = floating
    printf("The value of pi is %.lf\n", pi); // %lf = long floating point number
    printf("Your grade is %c\n", grade); // %c = character
    printf("Hello, %s!\n", name); // %s = string
    printf("%d", isOnline);

    return 0;
}