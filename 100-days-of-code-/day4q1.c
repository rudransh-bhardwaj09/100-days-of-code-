 #include<stdio.h>

int main() {
    int a = 10, b = 20;
    printf("Before swapping: a = %d, b = %d\n", a, b);
    int a1 = a + b;
    b = a1 - b;
    a = a1 - b;
    printf("After swapping: a = %d, b = %d\n", a, b);
    return 0;
}

