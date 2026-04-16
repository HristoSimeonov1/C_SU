#include <stdio.h>

typedef struct{
    char type[50];
    char modelName[30];
    float price;
}transportMethod;
int main(){

    transportMethod Transport[3] = {
        {"Car", "Toyota Camry", 25000.0},
        {"Bicycle", "Giant Escape 3", 500.0},
        {"Bus", "Mercedes-Benz Citaro", 300000.0}
    };

    printf("Selected transportation methods:\n");
    for(int i = 0; i < 3; i++){
        printf("%s %s: $%.2f\n", Transport[i].type, Transport[i].modelName, Transport[i].price);
    }

    return 0;
}