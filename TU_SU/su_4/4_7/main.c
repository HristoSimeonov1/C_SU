#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, m;
    printf("Enter N and M (min 3): ");
    scanf("%d %d", &n, &m);

    if (n < 3 || m < 3) return 1;

    int matrix[n][m];
    printf("Enter elements:\n");
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            scanf("%d", &matrix[i][j]);

    int max_sum = -2147483648;
    int max_r = 0, max_c = 0;

    for (int i = 0; i <= n - 3; i++) {
        for (int j = 0; j <= m - 3; j++) {
            int current_sum = 0;
            for (int r = 0; r < 3; r++)
                for (int c = 0; c < 3; c++)
                    current_sum += matrix[i + r][j + c];
            if (current_sum > max_sum) {
                max_sum = current_sum;
                max_r = i;
                max_c = j;
            }
        }
    }

    printf("\nMax sum 3x3 (%d):\n", max_sum);
    for (int r = 0; r < 3; r++) {
        for (int c = 0; c < 3; c++) printf("%d ", matrix[max_r + r][max_c + c]);
        printf("\n");
    }

    return 0;
}