#include <stdio.h>

int main() {
    float N, W, L, M, O;
    float area, tileArea, tiles, time;

    printf("Enter N W L M O: \n");
    scanf("%f %f %f %f %f", &N, &W, &L, &M, &O);

    area = N*N - M*O;
    tileArea = W*L;

    tiles = area / tileArea;
    time = tiles * 0.2;

    printf("Tiles: %.0f\n", tiles);
    printf("Time: %.2f minutes\n", time);

    return 0;
}