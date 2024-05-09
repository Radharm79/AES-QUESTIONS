#include <stdio.h>

int main() {
    long long binaryNumber;
    int decimalNumber = 0, base = 1, remainder;

    // Input binary number
    printf("Enter a binary number: ");
    scanf("%lld", &binaryNumber);

    // Convert binary to decimal
    while (binaryNumber != 0) {
        remainder = binaryNumber % 10;
        decimalNumber += remainder * base;
        binaryNumber /= 10;
        base *= 2;
    }

    // Output the decimal number
    printf("Decimal equivalent: %d\n", decimalNumber);

    return 0;
}
