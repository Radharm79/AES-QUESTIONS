#include <stdio.h>

int main() {
    int octalNumber, decimalNumber = 0, base = 1, remainder;

    // Input octal number
    printf("Enter an octal number: ");
    scanf("%o", &octalNumber);

    // Convert octal to decimal
    while (octalNumber != 0) {
        remainder = octalNumber % 10;
        decimalNumber += remainder * base;
        octalNumber /= 10;
        base *= 8;
    }

    // Output the decimal number
    printf("Decimal equivalent: %d\n", decimalNumber);

    return 0;
}
