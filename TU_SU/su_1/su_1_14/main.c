#include <stdio.h>

int main() {

    float vegPrice, fruitPrice;
    int vegKg, fruitKg;
    float total;

    scanf("%f", &vegPrice);
    scanf("%f", &fruitPrice);
    scanf("%d", &vegKg);
    scanf("%d", &fruitKg);

    total = (vegPrice * vegKg + fruitPrice * fruitKg) / 1.95;

    printf("%.2f\n", total);

    return 0;
}