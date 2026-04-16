#include <stdio.h>
#include <math.h> // Нужно за функцията sqrt() и pow()

// Структура за точка в 3D пространството
typedef struct {
    double x;
    double y;
    double z;
} Point3D;

// Функция за изчисляване на разстоянието между две точки
double calculateDistance(Point3D p1, Point3D p2) {
    return sqrt(pow(p2.x - p1.x, 2) + pow(p2.y - p1.y, 2) + pow(p2.z - p1.z, 2));
}

int main() {
    // Масив от 3 точки, които ще образуват нашия триъгълник
    Point3D trianglePoints[3] = {
        {0.0, 0.0, 0.0}, // Точка А (началото на координатната система)
        {3.0, 0.0, 0.0}, // Точка B
        {0.0, 4.0, 0.0}  // Точка C
    };

    // Изчисляване на страните (разстоянията между точките)
    double sideAB = calculateDistance(trianglePoints[0], trianglePoints[1]);
    double sideBC = calculateDistance(trianglePoints[1], trianglePoints[2]);
    double sideCA = calculateDistance(trianglePoints[2], trianglePoints[0]);

    printf("Side AB: %.2f\n", sideAB);
    printf("Side BC: %.2f\n", sideBC);
    printf("Side CA: %.2f\n", sideCA);

    return 0;
}