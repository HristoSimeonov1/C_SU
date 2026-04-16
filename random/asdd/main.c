// По въведени параметри за лице на трапец пресметнете лицето му.

#include <stdio.h>

int main(){

    float a, b, h;
    printf("Enter a, b and h: \n");
    scanf("%f %f %f", &a, &b, &h);

    float area = (a + b) * h / 2;
    printf("Area: %.2f\n", area);

    return 0;
}