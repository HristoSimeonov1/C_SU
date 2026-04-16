#include <stdio.h>

int main(){

    float N, M, rate;

    printf("Enter N and M: \n");
    scanf("%f %f", &N, &M);

    printf("Enter dollar rate: \n");
    scanf("%f", &rate);

    float monthlySalary = N * M;
    float yearlySalary = monthlySalary * 12;

    float bonus = 2.5 * monthlySalary;

    float total = yearlySalary + bonus;

    float tax = total * 0.25;

    float net = total - tax;

    float averagePerDay = net / 365.0;

    float leva = averagePerDay * rate;

    printf("Average daily profit in leva: %.2f\n", leva);

    return 0;
}