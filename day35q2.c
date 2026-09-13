#include <stdio.h>

int main() {
    int n, k;

    scanf("%d", &n);

    int a[n], result[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    scanf("%d", &k);

    k = k % n;

    // Rotate to the right
    for (int i = 0; i < n; i++) {
        result[(i + k) % n] = a[i];
    }

    // Print result
    for (int i = 0; i < n; i++) {
        printf("%d", result[i]);
        if (i < n - 1)
            printf(" ");
    }

    return 0;
}
