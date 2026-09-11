#include <stdio.h>

int main() {
    int n, x;

    scanf("%d", &n);

    int a[n + 1];

    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    scanf("%d", &x);

    int i = n - 1;

    // Shift elements to the right
    while (i >= 0 && a[i] > x) {
        a[i + 1] = a[i];
        i--;
    }

    // Insert element
    a[i + 1] = x;

    // Print array
    for (i = 0; i <= n; i++) {
        printf("%d", a[i]);
        if (i < n)
            printf(" ");
    }

    return 0;
}
