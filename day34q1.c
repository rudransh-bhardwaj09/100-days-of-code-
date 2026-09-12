#include <stdio.h>

int main() {
    int n, pos, x;

    scanf("%d", &n);

    int a[n + 1];

    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    scanf("%d %d", &pos, &x);

    // Shift elements to the right
    for (int i = n; i > pos; i--) {
        a[i] = a[i - 1];
    }

    // Insert element at position
    a[pos] = x;

    // Print array
    for (int i = 0; i <= n; i++) {
        printf("%d", a[i]);
        if (i < n)
            printf(" ");
    }

    return 0;
}
