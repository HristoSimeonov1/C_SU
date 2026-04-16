#include <stdio.h>

int main(){

    float celsius;
    printf("Enter the temperature in Celsius: ");
    scanf("%f", &celsius);

    printf("The temperature in Fahrenheit is: %.1fF\n", celsius * 9.0/5.0 + 32);

    return 0;
}