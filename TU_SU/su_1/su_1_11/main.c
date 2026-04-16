#include <stdio.h>

int main(){
    float x1, y1, x2, y2, x, y, S;

    printf("Enter x1 y1 x2 y2: \n");
    scanf("%f %f %f %f", &x1, &y1, &x2, &y2);

    if(x2 < x1)
    { 
        x = x1 - x2;
    } else 
    {
        x = x2 - x1;
    }

    if(y2 < y1)
    {
         y = y1 - y2;
    } else 
    {
        y = y2 - y1;
    }

    S = x * y;

    printf("Area = %.2fcm^2", S);

    return 0;
}