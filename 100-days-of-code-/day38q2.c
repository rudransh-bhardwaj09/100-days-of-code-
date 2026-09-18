#include <stdio.h>

int main() {
    int r, c;
    int matrix[100][100];
    int symmetric = 1;

    scanf("%d %d", &r, &c);

    // Read matrix
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // A symmetric matrix must be square
    if (r != c) {
        symmetric = 0;
    } else {
        // Check matrix[i][j] == matrix[j][i]
        for (int i = 0; i < r; i++) {
            for (int j = 0; j < c; j++) {
                if (matrix[i][j] != matrix[j][i]) {
                    symmetric = 0;
                    break;
                }
            }

            if (symmetric == 0)
                break;
        }
    }

    if (symmetric)
        printf("True");
    else
        printf("False");

    return 0;
}
