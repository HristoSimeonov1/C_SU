#include <stdio.h>

int main() {
    int n, m;
    printf("Enter N and M: ");
    scanf("%d %d", &n, &m);

    int matrix[n][m];
    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    int min_val = matrix[0][0], max_val = matrix[0][0];
    int min_row = 0, max_row = 0;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (matrix[i][j] < min_val) {
                min_val = matrix[i][j];
                min_row = i;
            }
            if (matrix[i][j] > max_val) {
                max_val = matrix[i][j];
                max_row = i;
            }
        }
    }

    if (min_row != max_row) {
        for (int j = 0; j < m; j++) {
            int temp = matrix[min_row][j];
            matrix[min_row][j] = matrix[max_row][j];
            matrix[max_row][j] = temp;
        }
    }

    printf("\nAfter change:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}