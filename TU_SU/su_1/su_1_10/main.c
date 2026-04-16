#include <stdio.h>
#include <math.h>

int main() {
    double a = 0.0;

    printf("Enter the angle in degrees: ");
    scanf("%lf", &a);

    a = a * 3.14159 / 180;

    printf("sin = %lf\n", sin(a));
    printf("cos = %lf\n", cos(a));
    printf("tg = %lf\n", tan(a));
    printf("cotg = %lf\n", 1/tan(a));

    return 0;
}