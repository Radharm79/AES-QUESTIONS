#include <stdio.h>

int main() {
    float radius;
    float area, perimeter;
    float pi = 3.14159;

    // Input radius
    printf("Enter radius of the circle: ");
    scanf("%f", &radius);

    // Calculate area
    area = pi * radius * radius;

    // Calculate perimeter
    perimeter = 2 * pi * radius;

    // Display results
    printf("Area of the circle: %f\n", area);
    printf("Perimeter of the circle: %f\n", perimeter);

    return 0;
}
