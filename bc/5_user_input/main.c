#include <stdio.h>

int main(){

    int age = 0;
    float gpa = 0.0f;
    char grade = '\0';
    char name[30] = "";
    char fname[30] = "";

    printf("Enter your age: ");
    scanf("%d", &age);

    printf("Enter your gpa: ");
    scanf("%f", &gpa);

    printf("Enter your grade: ");
    scanf(" %c", &grade);   // <-- интервал пред %c !!!

    printf("Enter your first name: ");
    scanf("%29s", name);    // няма нужда от &

    getchar(); // изчистване на остатъчния newline

    printf("Enter your full name: ");
    fgets(fname, sizeof(fname), stdin);

    printf("\n--- OUTPUT ---\n");
    printf("%d\n", age);
    printf("%.2f\n", gpa);
    printf("%c\n", grade);
    printf("%s\n", name);
    printf("%s\n", fname);

    return 0;
}
