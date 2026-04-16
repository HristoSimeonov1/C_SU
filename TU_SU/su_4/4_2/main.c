#include <stdio.h>

int main() {
    int n, m;
    
    printf("Enter N and M: ");
    scanf("%d %d", &n, &m);

    int a[n][m];

    printf("Enter the elements:\n");
    for(int i = 0; i < n; i++) {
        printf("Row %d: ", i + 1);
        for(int j = 0; j < m; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    int maxSum = -10000;
    int result = a[0][0];

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {

            int sum = 0;

            for(int di = -1; di <= 1; di++) {
                for(int dj = -1; dj <= 1; dj++) {

                    int ni = i + di;
                    int nj = j + dj;

                    if(di == 0 && dj == 0) continue;

                    if(ni >= 0 && ni < n && nj >= 0 && nj < m) {
                        sum += a[ni][nj];
                    }
                }
            }

            if(sum > maxSum) {
                maxSum = sum;
                result = a[i][j];
            }
        }
    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    printf("\nMax sum of neighbours: %d\n", result);

    return 0;
}