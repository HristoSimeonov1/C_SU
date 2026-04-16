#include <stdio.h>

int main(){

    float width, height;
    printf("Enter the width and height: \n");
    scanf("%f %f", &width, &height);

    float workingwidth = width - 1;
    float workingArea = workingwidth * height;
    float deskArea = 0.7*1.2;

    printf("The number of desks that can fit in the classroom is: %.0f\n", (workingArea / deskArea) - 3);

    return 0;
}