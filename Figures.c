#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float square_perimeter(float side)
{
    return 4 * side;
}

float triangle_perimeter(float side1, float side2, float side3)
{
    return side1 + side2 + side3;
}

float circle_circumference(float radius)
{
    return 2 * M_PI * radius;
}

float rectangular_triangle_area(float base, float height)
{
    return 0.5 * base * height;
}

void figure_info(int figure_code, float s1, float s2, float s3)
{
    switch (figure_code)
    {
        case 5:
            printf("Square with side length %.2f\n", s1);
            printf("Perimeter: %.2f\n", square_perimeter(s1));
            break;
        case 6:
            printf("Triangle with sides %.2f, %.2f, %.2f\n", s1, s2, s3);
            printf("Perimeter: %.2f\n", triangle_perimeter(s1, s2, s3));
            break;
        case 7:
            printf("Circle with radius %.2f\n", s1);
            printf("Circumference: %.2f\n", circle_circumference(s1));
            break;
        case 8:
            printf("Rectangular triangle with base %.2f and height %.2f\n", s1, s2);
            printf("Area: %.2f\n", rectangular_triangle_area(s1, s2));
            break;
        default:
            printf("Invalid figure code\n");
    }
}

int main()
{
    int figure_code;
    float s1, s2, s3;

    printf("Enter figure code (5-8): ");
    scanf("%d", &figure_code);

    switch (figure_code)
    {
        case 5:
            printf("Enter side length: ");
            scanf("%f", &s1);
            break;
        case 6:
            printf("Enter sides (comma separated): ");
            scanf("%f,%f,%f", &s1, &s2, &s3);
            break;
        case 7:
            printf("Enter radius: ");
            scanf("%f", &s1);
            break;
        case 8:
            printf("Enter base and height (with comma): ");
            scanf("%f,%f", &s1, &s2);
            break;
        default:
            printf("Invalid figure code\n");
            return 0;
    }

    figure_info(figure_code, s1, s2, s3);

    return 0;
}
