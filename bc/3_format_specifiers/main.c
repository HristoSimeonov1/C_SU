#include <stdio.h>

int main(){

    // Format specifier = Special tokens that begin with a % symbol,
    //                    followed by a character that specifies the
    //                    data type and optional modifiers (width,
    //                    precision, flags)
    //                    They control how data is displayed or
    //                    interpreted.

    /*   int age = 20;
        float price = 19.99;
        double pi = 3.1415926535;
        char currency = '$';
        char name[] = "Hristo Simeonov";

        printf("%d\n", age);
        printf("%.2f\n", price);
        printf("%lf\n", pi);
        printf("%c\n", currency);
        printf("%s\n", name);
    */ 

    // width

    int num1 = 1;
    int num2 = 10;
    int num3 = 100;
    int num4 = -1000;

    printf("%3d\n", num1); // width е тази тройка отпред, която дава
    printf("%-3d\n", num2);// колко character-а трябва да има print-а
    printf("%04d\n", num3); // ако 3-ката е с минус отпред, празното
    printf("%+d\n", num4); // място отива след самия print
    //                       ако има 0 пред width-а, се добавят 0;
    //                       ако има + отпред, се изписва дали е 
    //                       положително или отрицателно числото

    return 0;
}