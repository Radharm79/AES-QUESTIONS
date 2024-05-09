#include <stdio.h>

int main() {
    int decimalNumber, remainder, binaryNumber = 0, base = 1;

    // Input decimal number
    printf("Enter a decimal number: ");
    scanf("%d", &decimalNumber);

    // Convert decimal to binary
    while (decimalNumber > 0) {
        remainder = decimalNumber % 2;
        binaryNumber += remainder * base;
        decimalNumber /= 2;
        base *= 10;
    }

    // Output the binary number
    printf("Binary equivalent: %d\n", binaryNumber);

    return 0;
}
