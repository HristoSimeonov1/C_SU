#include <stdio.h>

int main(){

    float degrees = 0.0;
    printf("Enter the angle in degrees: ");
    scanf("%f", &degrees);

    float radians = degrees * 3.14159265358979323846 / 180.0;
    printf("The angle in radians is: %.2f\n", radians);

    return 0;
}