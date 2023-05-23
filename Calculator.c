#include <stdio.h>
#include <math.h>


float subtract(float x, float y) {
    return x - y;
}


float divide(float x, float y) {
    return x / y;
}


float multiply(float x, float y) {
    return x * y;
}


float power(float x, float y) {
    return pow(x, y);
}

int main() {
    float x, y;

    printf("Enter values for x and y: ");
    scanf("%f%f", &x, &y);

    float sub = subtract(x, y);
    printf("%.2f - %.2f = %.2f\n", x, y, sub);

    float div = divide(x, y);
    printf("%.2f / %.2f = %.2f\n", x, y, div);

    float mul = multiply(x, y);
    printf("%.2f * %.2f = %.2f\n", x, y, mul);

    float pow = power(x, y);
    printf("%.2f ^ %.2f = %.2f\n", x, y, pow);

    return 0;
}
