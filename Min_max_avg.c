#include <stdio.h>
#include <stdlib.h>

int minimum(int a, int b, int c) {
    int min = a;
    if (b < min) {
        min = b;
    }
    if (c < min) {
        min = c;
    }
    return min;
}

int maximum(int a, int b, int c) {
    int max = a;
    if (b > max) {
        max = b;
    }
    if (c > max) {
        max = c;
    }
    return max;
}

int sum(int a, int b, int c) {
    return a + b + c;
}

float average(int a, int b, int c) {
    return (float)sum(a, b, c) / 3;
}

int main() {
    int a, b, c;
    printf("Enter three int numbers: ");
    scanf("%d %d %d", &a, &b, &c);
    printf("Minimum: %d\n", minimum(a, b, c));
    printf("Maximum: %d\n", maximum(a, b, c));
    printf("Sum: %d\n", sum(a, b, c));
    printf("Average: %.2f\n", average(a, b, c));
    return 0;
}
