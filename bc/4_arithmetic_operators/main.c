#include <stdio.h>

int main(){

    // arithmetic operators = + - * / % ++ --

    int x = 10;
    int y = 3;
    int z = 0; // трябва да напишем, че е = 0, иначе няма да тръгне

    // z = x + y;
    // z = x - y;
    // z = x * y;
    // z = x / y;
    // z = x % y;

    x++; // result = 11(добавя се едно към числото)
    x--; // result = 9(изважда се едно от числото)
    x += 2; // по същия начин може с всички

    printf("%d\n", x);
    printf("%d\n", z);

    return 0;
}