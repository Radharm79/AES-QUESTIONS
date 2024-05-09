#include <stdio.h>

// Function to calculate the sum of two integers
int sum(int num1, int num2) {
    return num1 + num2;
}

// Function to calculate the average of two integers
float average(int num1, int num2) {
    return (float)(num1 + num2) / 2;
}

int main() {
    int num1, num2;
    float avg;

    // Input the two integer numbers
    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter second number: ");
    scanf("%d", &num2);

    // Calculate the sum using the sum() function
    int total = sum(num1, num2);
    printf("Sum: %d\n", total);

    // Calculate the average using the average() function
    avg = average(num1, num2);
    printf("Average: %.2f\n", avg);

    return 0;
}
