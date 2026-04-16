#include <stdio.h>

int main(){

    float lv;
    printf("Enter the amount in lev: ");
    scanf("%f", &lv);

    float dollars = lv * 0.604;
    printf("The amount in dollars is: %.2f\n", dollars);

    float eur = lv * 0.5113;
    printf("The amount in euros is: %.2f\n", eur);

    float gbp = lv * 0.445;
    printf("The amount in pounds is: %.2f\n", gbp);

    return 0;
}