#include <stdio.h>

int main(){

    float inches;
    printf("Enter the length in inches: ");
    scanf("%f", &inches);

    float mm = 25.4;
    float cm = 2.54;
    float dm = 0.254;
    float m = 0.0254;

    printf("The length in milimeters is %.2f\n", mm * inches);
    printf("The length in centimeters is %.2f\n", cm * inches);
    printf("The length in decimeters is %.2f\n", dm * inches);
    printf("The length in meters is %.2f\n", m * inches);

    return 0;
}