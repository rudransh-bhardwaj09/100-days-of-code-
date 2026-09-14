#include <stdio.h>

int main() {
    int rows, cols;
    int sum = 0;

    scanf("%d %d", &rows, &cols);

    int a[rows][cols];

    // Read matrix and calculate sum
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &a[i][j]);
            sum += a[i][j];
        }
    }

    printf("%d", sum);

    return 0;
}
