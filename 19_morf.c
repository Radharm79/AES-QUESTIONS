#include <stdio.h>

int main() {
    char gender;

    // Input gender character
    printf("Enter gender (M/F): ");
    scanf(" %c", &gender);

    // Using switch statement to print gender
    switch (gender)
    {
    case 'M':
    case 'm':
        printf("Male!");
        break;
    case 'F':
    case 'f':
        printf("Female!");
        break;
    default:
        break;
    }

    return 0;
}
