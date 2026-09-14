#include <stdio.h>

int main() {
    int rows, cols;

    scanf("%d %d", &rows, &cols);

    int a[rows][cols];

    // Read matrix
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    // Print matrix
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d", a[i][j]);
            if (j < cols - 1)
                printf(" ");
        }
        printf("\n");
    }

    return 0;
}
