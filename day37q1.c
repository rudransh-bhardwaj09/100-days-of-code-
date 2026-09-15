#include <stdio.h>

int main() {
    int rows, cols;

    scanf("%d %d", &rows, &cols);

    int a[rows][cols];
    int sum[rows];

    // Read matrix and calculate row sums
    for (int i = 0; i < rows; i++) {
        sum[i] = 0;

        for (int j = 0; j < cols; j++) {
            scanf("%d", &a[i][j]);
            sum[i] += a[i][j];
        }
    }

    // Print row sums
    for (int i = 0; i < rows; i++) {
        printf("%d", sum[i]);

        if (i < rows - 1)
            printf(" ");
    }

    return 0;
}
