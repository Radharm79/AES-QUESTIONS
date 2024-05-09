#include <stdio.h>

int main() {
    int decimalNumber, quotient, remainder, i = 1;
    char hexadecimalNumber[100];

    // Input decimal number
    printf("Enter a decimal number: ");
    scanf("%d", &decimalNumber);

    // Convert decimal to hexadecimal
    quotient = decimalNumber;
    while (quotient != 0) {
        remainder = quotient % 16;
        if (remainder < 10)
            hexadecimalNumber[i++] = remainder + '0';
        else
            hexadecimalNumber[i++] = remainder + 'A' - 10;
        quotient /= 16;
    }

    // Output the hexadecimal number in reverse order
    printf("Hexadecimal equivalent: ");
    for (int j = i - 1; j > 0; j--)
        printf("%c", hexadecimalNumber[j]);
    printf("\n");

    return 0;
}
