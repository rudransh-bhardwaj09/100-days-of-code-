#include <stdio.h>

int main()
{
    int arr[10];
    int i, j, n, k;
    int found;

    printf("Enter the number of elements you want to enter: ");
    scanf("%d", &n);

    if (n < 1 || n > 10)
    {
        printf("Array size must be between 1 and 10.");
        return 1;
    }

    printf("Enter the subarray size: ");
    scanf("%d", &k);

    if (k < 1 || k > n)
    {
        printf("Invalid subarray size.");
        return 1;
    }

    for (i = 0; i < n; i++)
    {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("First negative integers: ");

    for (i = 0; i <= n - k; i++)
    {
        found = 0;

        for (j = i; j < i + k; j++)
        {
            if (arr[j] < 0)
            {
                printf("%d ", arr[j]);
                found = 1;
                break;
            }
        }

        if (found == 0)
        {
            printf("0 ");
        }
    }

    return 0;
}