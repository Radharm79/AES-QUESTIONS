#include <stdio.h>

// Function to print the table of a given number
void printTable(int number) {
    printf("Table of %d:\n", number);
    for (int i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", number, i, number * i);
    }
}

int main() {
    int number;

    // Input the number
    printf("Enter an integer number: ");
    scanf("%d", &number);

    // Call the user-defined function to print the table
    printTable(number);

    return 0;
}
