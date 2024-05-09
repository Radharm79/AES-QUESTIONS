#include <stdio.h>
#include <math.h>

int main() {
    float num = 3.75;
    float result_floor, result_ceil;

    // Using floor() to round down to the nearest integer
    result_floor = floor(num);

    // Using ceil() to round up to the nearest integer
    result_ceil = ceil(num);

    printf("Original number: %.2f\n", num);
    printf("After rounding down (floor): %.2f\n", result_floor);
    printf("After rounding up (ceil): %.2f\n", result_ceil);

    return 0;
}
