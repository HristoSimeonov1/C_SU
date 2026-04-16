#include <stdio.h>
#include <math.h>

int main(){

    int x1, x2, x3, y1, y2, y3;
    printf("Enter x1 y1 x2 y2 x3 y3: \n");
    scanf("%d %d %d %d %d %d", &x1, &y1, &x2, &y2, &x3, &y3);

    if(x1 == x2 || x1 == x3 || x2 == x3 || y1 == y2 || y1 == y3 || y2 == y3)
    {
        printf("The points shouldn't be on the same line.\n");
    } else
    {
        printf("The area of the triangle is: %.2f\ncm^2", fabs((x1*(y2-y3) + x2*(y3-y1) + x3*(y1-y2)) / 2.0)); 
    }
    return 0;
}