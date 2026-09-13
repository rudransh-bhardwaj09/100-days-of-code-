#include <stdio.h>

int main() {
    int n, pos;

    scanf("%d", &n);

    int a[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    scanf("%d", &pos);

    // Shift elements to the left
    for (int i = pos; i < n - 1; i++) {
        a[i] = a[i + 1];
    }

    // Print array after deletion
    for (int i = 0; i < n - 1; i++) {
        printf("%d", a[i]);
        if (i < n - 2)
            printf(" ");
    }

    return 0;
}
